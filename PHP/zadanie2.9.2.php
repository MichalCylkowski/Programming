<!DOCTYPE html>
<html>
<head>
    <title>Głosowanie</title>
</head>
<body>
<?php
if (isset($_COOKIE['glosowanie'])) {
    echo '<p>Już oddałeś głos.</p>';
} else {
    ?>
    <form method="post" action="">
        <p>Pytanie: Kto wygra wybory?</p>
        <input type="radio" name="wybor" value="Koalicja">Koalicja<br>
        <input type="radio" name="wybor" value="Pis">Pis<br>
        <input type="radio" name="wybor" value="Konfederacja">Konfederacja<br>
        <input type="submit" name="submit" value="Oddaj głos">
    </form>
    <?php
}
if (isset($_POST['submit'])) {
    $wybor = $_POST['wybor'];
    setcookie('glosowanie', 'tak', time() + 10);
    echo '<p>Dziękujemy za oddanie głosu!</p>';
}
?>
</body>
</html>

