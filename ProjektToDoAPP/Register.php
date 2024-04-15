<?php
// Dane o połączeniu z bazą danych
$servername = "szuflandia.pjwstk.edu.pl";
$username = "s26996";
$password = "Mic.Cylk";
$dbname = "s26996";

// Obsługa rejestracji
if (isset($_POST['register'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $username = $_POST['username'];
    $password = $_POST['password'];

    // Sprawdzenie, czy użytkownik już istnieje
    $checkQuery = "SELECT * FROM user WHERE username = '$username'";
    $checkResult = $conn->query($checkQuery);

    if ($checkResult->num_rows > 0) {
        $registerError = "Użytkownik o podanej nazwie już istnieje.";
    } else {
        // Haszowanie hasła
        $hashed_password = password_hash($password, PASSWORD_DEFAULT);

        // Dodanie użytkownika do bazy danych
        $sql = "INSERT INTO user (username, password) VALUES ('$username', '$hashed_password')";

        if ($conn->query($sql) === TRUE) {
            $user_id = $conn->insert_id;
            $_SESSION['username'] = $username;
            $_SESSION['user_id'] = $user_id;
            header("Location: Main.php");
            exit();
        } else {
            $registerError = "Wystąpił błąd podczas rejestracji.";
        }
    }

    $conn->close();
}
?>
<!DOCTYPE html>
<html>
<head>
    <h1> <a href="Main.php">STRONA GŁOWNA </a></h1>
    <title>Rejestracja</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        .register-container {
            width: 300px;
            padding: 20px;
            border: 1px solid #ccc;
            border-radius: 5px;
        }
        .form-group {
            margin-bottom: 10px;
        }
        label {
            display: block;
            font-weight: bold;
        }
        input[type="text"],
        input[type="password"] {
            width: 100%;
            padding: 5px;
            border-radius: 3px;
            border: 1px solid #ccc;
        }
        .error-message {
            color: #ff0000;
        }
        .register-btn {
            background-color: #007bff;
            color: #fff;
            border: none;
            padding: 5px 10px;
            border-radius: 5px;
            cursor: pointer;
        }
    </style>
</head>
<body>
<div class="register-container">
    <h2>Rejestracja</h2>
    <form method="POST" action="">
        <div class="form-group">
            <label>Username:</label>
            <input type="text" name="username" required>
        </div>
        <div class="form-group">
            <label>Password:</label>
            <input type="password" name="password" required>
        </div>
        <?php if (isset($registerError)) { ?>
            <p class="error-message"><?php echo $registerError; ?></p>
        <?php } ?>
        <button class="register-btn" type="submit" name="register">Zarejestruj</button>
        <a href="Login.php">Logowanie</a>
        <a href="Main.php">Strona glowna</a>
    </form>
</div>
</body>
</html>
