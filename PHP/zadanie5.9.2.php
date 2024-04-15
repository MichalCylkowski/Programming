<!DOCTYPE html>
<html>
<head>
    <title>Cookie Manager</title>
</head>
<body>
<?php
// wyświetlanie wszystkich ciasteczek
if(isset($_COOKIE)) {
    echo "<h2>Lista ciasteczek:</h2>";
    foreach($_COOKIE as $key=>$value) {
        echo "<p>$key : $value</p>";
    }
} else {
    echo "<p>Brak ciasteczek</p>";
}
?>

<form method="POST">
    <h2>Dodaj ciasteczko:</h2>
    <label>Nazwa: </label><input type="text" name="name"><br>
    <label>Wartość: </label><input type="text" name="value"><br>
    <label>Data wygaśnięcia: </label><input type="text" name="expiration_date"><br>
    <input type="submit" name="add_cookie" value="Dodaj ciasteczko">
</form>

<?php
// dodawanie ciasteczka
if(isset($_POST['add_cookie'])) {
    $name = $_POST['name'];
    $value = $_POST['value'];
    $expiration_date = $_POST['expiration_date'];

    if(!empty($name) && !empty($value)) {
        if(!empty($expiration_date)) {
            setcookie($name, $value, strtotime($expiration_date));
        } else {
            setcookie($name, $value);
        }
        echo "<p>Ciasteczko dodane!</p>";
    } else {
        echo "<p>Nazwa i wartość ciasteczka są wymagane!</p>";
    }
}
?>

<form method="POST">
    <h2>Wyszukaj ciasteczko:</h2>
    <input type="text" name="search">
    <input type="submit" name="search_cookie" value="Szukaj">
</form>

<?php
// wyszukiwanie ciasteczka
if(isset($_POST['search_cookie'])) {
    $search = $_POST['search'];
    if(isset($_COOKIE[$search])) {
        echo "<p>Ciasteczko o nazwie $search ma wartość {$_COOKIE[$search]}</p>";
    } else {
        echo "<p>Nie znaleziono ciasteczka o nazwie $search</p>";
    }
}
?>

<form method="POST">
    <h2>Usuń ciasteczko:</h2>
    <input type="text" name="delete_cookie">
    <input type="submit" name="delete" value="Usuń">
</form>

<?php
// usuwanie ciasteczka
if(isset($_POST['delete'])) {
    $delete_cookie = $_POST['delete_cookie'];
    if(isset($_COOKIE[$delete_cookie])) {
        setcookie($delete_cookie, "", time()-3600);
        echo "<p>Ciasteczko $delete_cookie zostało usunięte</p>";
    } else {
        echo "<p>Ciasteczko $delete_cookie nie istnieje</p>";
    }
}
?>
</body>
</html>




