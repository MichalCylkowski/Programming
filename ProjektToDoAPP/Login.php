<?php
session_start();

// Dane o połączeniu z bazą danych
$servername = "szuflandia.pjwstk.edu.pl";
$username = "s26996";
$password = "Mic.Cylk";
$dbname = "s26996";

// Sprawdzenie, czy użytkownik jest już zalogowany
if (isset($_SESSION['username'])) {
    header("Location: Main.php");
    exit();
}

// Obsługa logowania
if (isset($_POST['login'])) {
    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Błąd połączenia: " . $conn->connect_error);
    }

    $username1 = $_POST['username'];
    $password1 = $_POST['password'];
    $user_id = $_POST['user_id'];

    // Haszowanie hasła
    $hashed_password = password_hash($password1, PASSWORD_DEFAULT);

    $sql = "SELECT * FROM user WHERE username = '$username1'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        $row = $result->fetch_assoc();
        if (password_verify($password1, $row['password'])) {
            $_SESSION['username'] = $username1;
            $_SESSION['user_id'] = $row['id'];

            header("Location: Main.php");
            exit();
        }
    }

    $loginError = "Nieprawidłowy login lub hasło.";

    $conn->close();
}
?>

<!DOCTYPE html>
<html>
<head>
    <h1> <a href="Main.php">STRONA GŁOWNA </a></h1>
    <title>Logowanie</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        .login-container {
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
        .login-btn {
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
<div class="login-container">
    <h2>Logowanie</h2>
    <form method="POST" action="">
        <div class="form-group">
            <label>Username:</label>
            <input type="text" name="username" required>
        </div>
        <div class="form-group">
            <label>Password:</label>
            <input type="password" name="password" required>
        </div>
        <?php if (isset($loginError)) { ?>
            <p class="error-message"><?php echo $loginError; ?></p>
        <?php } ?>
        <button class="login-btn" type="submit" name="login">Zaloguj</button>
        <a href="Main.php">Strona glowna</a>
        <a href="Register.php">Rejestracja</a>
    </form>
</div>
</body>
</html>