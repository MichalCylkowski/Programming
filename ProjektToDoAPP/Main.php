<?php
session_start();
error_reporting(E_ALL);
ini_set('display_errors', '1');

// Sprawdzenie, czy użytkownik jest zalogowany
if (!isset($_SESSION['username'])) {
    header("Location: Login.php");
    exit();
}

// Obsługa wylogowania
if (isset($_POST['logout'])) {
    session_destroy();
    setcookie("username", "", time() - 3600); // Usunięcie ciasteczka "username"
    header("Location: Main.php");
    exit();
}

// Sprawdzenie ciasteczka "username"
if (!isset($_COOKIE['username'])) {
    setcookie("username", $_SESSION['username'], time() + 3600); // Ustawienie ciasteczka "username"
}
// Dane o połączeniu z bazą danych
$servername = "szuflandia.pjwstk.edu.pl";
$username = "s26996";
$password = "Mic.Cylk";
$dbname = "s26996";



// Obsługa dodawania zadania
if (isset($_POST['add_task'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $user_id = $_SESSION['user_id'];
    $task_name = $_POST['task_name'];

    // Sprawdzenie istnienia użytkownika o podanym id
    $checkUserQuery = "SELECT id FROM user WHERE id = ?";
    $checkUserStmt = $conn->prepare($checkUserQuery);
    $checkUserStmt->bind_param("i", $user_id);

    if (!$checkUserStmt->execute()) {
        die("Błąd zapytania: " . $checkUserStmt->error);
    }

    $checkUserResult = $checkUserStmt->get_result();

    if ($checkUserResult->num_rows == 0) {
        $taskError = "Wystąpił błąd podczas dodawania zadania: Nieprawidłowy użytkownik. ID:";
    } else {
        // Zapytanie INSERT do dodania zadania
        $insertTaskQuery = "INSERT INTO tasks (user_id, task_name) VALUES (?, ?)";
        $insertTaskStmt = $conn->prepare($insertTaskQuery);
        $insertTaskStmt->bind_param("is", $user_id, $task_name);

        if (!$insertTaskStmt->execute()) {
            die("Błąd zapytania: " . $insertTaskStmt->error);
        }

        $taskAdded = true;
    }

    $conn->close();
}

// Obsługa usuwania zadania
if (isset($_POST['delete_task'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $task_id = $_POST['task_id'];

    // Zapytanie DELETE do usunięcia zadania
    $deleteTaskQuery = "DELETE FROM tasks WHERE task_id = ?";
    $deleteTaskStmt = $conn->prepare($deleteTaskQuery);
    $deleteTaskStmt->bind_param("i", $task_id);

    if (!$deleteTaskStmt->execute()) {
        die("Błąd zapytania: " . $deleteTaskStmt->error);
    }

    $taskDeleted = true;

    $conn->close();

    // Przekierowanie do aktualnej strony po usunięciu zadania
    header("Location: ".$_SERVER['PHP_SELF']);
    exit();
}

// Obsługa edycji zadania
if (isset($_POST['edit_task'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $task_id = $_POST['task_id'];
    $task_name = $_POST['task_name'];

    // Zapytanie UPDATE do edycji zadania
    $updateTaskQuery = "UPDATE tasks SET task_name = ? WHERE task_id = ?";
    $updateTaskStmt = $conn->prepare($updateTaskQuery);
    $updateTaskStmt->bind_param("si", $task_name, $task_id);

    if (!$updateTaskStmt->execute()) {
        die("Błąd zapytania: " . $updateTaskStmt->error);
    }

    $taskEdited = true;

    $conn->close();

    // Przekierowanie do aktualnej strony po edycji zadania
    header("Location: ".$_SERVER['PHP_SELF']);
    exit();
}
if (isset($_POST['complete_task'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $task_id = $_POST['task_id'];
    $task_name = $_POST['task_name'];

    // Zapytanie UPDATE do edycji zadania
    $updateTaskQuery = "UPDATE tasks SET completed = true WHERE task_id = ?";
    $updateTaskStmt = $conn->prepare($updateTaskQuery);
    $updateTaskStmt->bind_param("i",  $task_id);

    if (!$updateTaskStmt->execute()) {
        die("Błąd zapytania: " . $updateTaskStmt->error);
    }

    $taskEdited = true;

    $conn->close();

    // Przekierowanie do aktualnej strony po edycji zadania
    header("Location: ".$_SERVER['PHP_SELF']);
    exit();
}

// Pobranie listy zadań użytkownika
$taskList = [];
if (isset($_SESSION['user_id'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $user_id = $_SESSION['user_id'];

    // Zapytanie SELECT do pobrania zadań
    $selectTasksQuery = "SELECT * FROM tasks WHERE user_id = ?";
    $selectTasksStmt = $conn->prepare($selectTasksQuery);
    $selectTasksStmt->bind_param("i", $user_id);

    if (!$selectTasksStmt->execute()) {
        die("Błąd zapytania: " . $selectTasksStmt->error);
    }

    $result = $selectTasksStmt->get_result();

    if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
            $taskList[] = $row;
        }
    }

    $conn->close();
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>Aplikacja ToDo</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 20px;
            background-color: #f5f5f5;
        }
        h1 {
            text-align: center;
            color: #0078D4;
            margin-top: 30px;
        }

        .welcome {
            margin-bottom: 20px;
            text-align: center;
        }

        .logout-btn {
            background-color: #0078D4;
            color: #fff;
            border: none;
            padding: 5px 10px;
            border-radius: 5px;
            cursor: pointer;
        }

        .task-container {
            margin-bottom: 20px;
        }

        .form-group {
            margin-bottom: 10px;
        }

        label {
            display: block;
            font-weight: bold;
        }

        input[type="text"] {
            width: 100%;
            padding: 5px;
            border-radius: 3px;
            border: 1px solid #ccc;
        }

        .error-message {
            color: #ff0000;
            margin-top: 10px;
        }

        .success-message {
            color: #008000;
            margin-top: 10px;
        }

        .add-task-btn,
        .edit-task-btn,
        .cancel-edit-btn,
        .delete-task-btn,
        .complete-task-btn {
            background-color: #0078D4;
            color: #fff;
            border: none;
            padding: 5px 10px;
            border-radius: 5px;
            cursor: pointer;
            margin-right: 5px;
        }

        .task-list {
            width: 300px;
        }

        .task-item {
            margin-bottom: 10px;
            padding: 10px;
            border: 1px solid #ccc;
            border-radius: 5px;
            background-color: #fff;
            box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .task-item .task-name {
            flex-grow: 1;
        }

        .edit-mode .task-name {
            display: none;
        }

        .edit-mode .edit-task-btn,
        .edit-mode .delete-task-btn,
        .edit-mode .complete-task-btn {
            display: none;
        }

        .edit-mode .cancel-edit-btn {
            background-color: #ffc107;
            color: #000;
            display: inline-block;
        }

        .edit-mode .save-task-btn {
            background-color: #28a745;
            color: #fff;
            display: inline-block;
        }
    </style>
</head>
<body>
<h1><a href="Main.php">STRONA GŁOWNA</a></h1>
<div class="welcome">
    <h2>Witaj, <?php echo $_SESSION['username']; ?>!</h2>
    <p>Dzisiaj jest: <?php echo date('Y-m-d'); ?></p>
    <p>Aktualna godzina: <span id="current-time"></span></p>
    <form method="POST" action="">
        <button class="logout-btn" type="submit" name="logout">Wyloguj</button>
    </form>
</div>
<div class="task-container">
    <h2>Dodaj nowe zadanie</h2>
    <?php if (isset($taskAdded)) { ?>
        <p class="success-message">Zadanie zostało dodane.</p>
    <?php } ?>
    <?php if (isset($taskError)) { ?>
        <p class="error-message"><?php echo $taskError ?></p>
    <?php } ?>
    <form method="POST" action="">
        <div class="form-group">
            <label for="task_name">Nazwa zadania:</label>
            <input type="text" id="task_name" name="task_name" required>
        </div>
        <div class="form-group">
            <button class="add-task-btn" type="submit" name="add_task">Dodaj zadanie</button>
        </div>
    </form>
</div>
<div class="task-list">
    <h2>Twoje zadania:</h2>
    <h3>Niewykonane:</h3>
    <?php foreach ($taskList as $task) {
        if (!$task['completed']) { ?>
            <div class="task-item <?php if (isset($_POST['edit_task']) && $_POST['task_id'] == $task['task_id']) { echo 'edit-mode'; } ?>">
                <div class="task-name">
                    <p><?php echo $task['task_name']; ?></p>
                </div>
                <form method="POST" action="">
                    <input type="hidden" name="task_id" value="<?php echo $task['task_id']; ?>">
                    <input type="text" name="task_name" value="<?php echo $task['task_name']; ?>" required>
                    <div class="button-group">
                        <?php if (isset($_POST['edit_task']) && $_POST['task_id'] == $task['task_id']) { ?>
                            <button class="cancel-edit-btn" type="submit" name="cancel_edit">Anuluj</button>
                            <button class="save-task-btn" type="submit" name="save_task">Zapisz</button>
                        <?php } else { ?>
                            <button class="edit-task-btn" type="submit" name="edit_task">Edytuj</button>
                            <button class="delete-task-btn" type="submit" name="delete_task">Usuń</button>
                            <button class="complete-task-btn" type="submit" name="complete_task">Wykonano</button>
                        <?php } ?>
                    </div>
                </form>
            </div>
        <?php }
    } ?>
    <h3>Wykonane:</h3>
    <?php foreach ($taskList as $task) {
        if ($task['completed']) { ?>
            <div class="task-item <?php if (isset($_POST['edit_task']) && $_POST['task_id'] == $task['task_id']) { echo 'edit-mode'; } ?>">
                <div class="task-name">
                    <p><?php echo $task['task_name']; ?></p>
                </div>
                <form method="POST" action="">
                    <input type="hidden" name="task_id" value="<?php echo $task['task_id']; ?>">
                    <input type="text" name="task_name" value="<?php echo $task['task_name']; ?>" required>
                    <div class="button-group">
                        <?php if (isset($_POST['edit_task']) && $_POST['task_id'] == $task['task_id']) { ?>
                            <button class="cancel-edit-btn" type="submit" name="cancel_edit">Anuluj</button>
                            <button class="save-task-btn" type="submit" name="save_task">Zapisz</button>
                        <?php } else { ?>
                            <button class="edit-task-btn" type="submit" name="edit_task">Edytuj</button>
                            <button class="delete-task-btn" type="submit" name="delete_task">Usuń</button>
                            <button class="complete-task-btn" type="submit" name="complete_task" disabled>Wykonano</button>
                        <?php } ?>
                    </div>
                </form>
            </div>
        <?php }
    } ?>
</div>
<script>
    // Funkcja do aktualizacji godziny co sekundę
    function updateClock() {
        var now = new Date();
        var hour = now.getHours();
        var minute = now.getMinutes();
        var second = now.getSeconds();

        // Dodawanie 0 przed jednocyfrowymi liczbami
        hour = (hour < 10) ? "0" + hour : hour;
        minute = (minute < 10) ? "0" + minute : minute;
        second = (second < 10) ? "0" + second : second;

        var time = hour + ":" + minute + ":" + second;

        // Aktualizacja elementu HTML z godziną
        document.getElementById("current-time").innerHTML = time;

        // Wywołanie funkcji co 1 sekundę
        setTimeout(updateClock, 1000);
    }

    // Wywołanie funkcji aktualizującej godzinę przy ładowaniu strony
    updateClock();
</script>

<script src="https://code.jquery.com/jquery-3.2.1.slim.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/popper.js@1.12.9/dist/umd/popper.min.js"></script>
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js">
</script>
</body>
</html>