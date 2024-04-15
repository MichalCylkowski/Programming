<!DOCTYPE html>
<html>
<head>
    <title>logowanie</title>
</head>
<body>
<h2>logowanie</h2>
<?php
session_start();

$poprawny_login = "login";
$poprawne_haslo = "haslo";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $login = $_POST["login"];
    $haslo = $_POST["haslo"];

    if ($login === $poprawny_login && $haslo === $poprawne_haslo) {
        $_SESSION['zalogowany'] = true;
        echo "Zalogowano poprawnie! ";
        echo "<a href='?wyloguj=1'>Wyloguj</a>";
        exit();
    } else {
        $error = "Niepoprawny login lub hasło";
    }
}

if(isset($_GET['wyloguj'])) {
    unset($_SESSION['zalogowany']);
}

if(isset($_SESSION['zalogowany'])) {
    echo "zalogowano ";
    echo "<a href='?wyloguj=1'>Wyloguj</a>";
    exit();
}

if(isset($error)) { ?>
    <p style="color:red;"><?php echo $error; ?></p>
<?php } ?>

<form method="post" action="">
    <label>Login:</label><br>
    <input type="text" name="login"><br>
    <label>Hasło:</label><br>
    <input type="password" name="haslo"><br><br>
    <input type="submit" value="Zaloguj">
</form>
</body>
</html>
