<html>
<head>
    <title>Creating MySQL Table</title>
</head>
<body>
<?php
mysqli_report(MYSQLI_REPORT_OFF);
$dbhost = 'szuflandia.pjwstk.edu.pl';
$dbuser = 's26996';
$dbpass = 'Mic.Cylk';
$dbname = 's26996';
$mysqli = new mysqli($dbhost, $dbuser, $dbpass, $dbname);

if($mysqli->connect_errno ) {
    printf("Connect failed: %s<br />", $mysqli->connect_error);
    exit();
}
printf('Connected successfully.<br />');

$sql = "CREATE TABLE Student( ".
    "StudentID INT NOT NULL AUTO_INCREMENT, ".
    "Firstname VARCHAR(255) NOT NULL, ".
    "Secondname VARCHAR(40) NOT NULL, ".
    "Salary INT NOT NULL, ".
    "DateOfBirth DATE,".
    "PRIMARY KEY ( StudentID )); ";

if ($mysqli->query($sql)) {
    printf("Table created.<br />");
}
if ($mysqli->errno) {
    $mysqli->query("DROP TABLE Student");
    printf("Dropped passed");
    exit();
}
for($i=1; $i <= 5; $i+=1) {
    $sql2 =
        "insert into Student (StudentID, Firstname, Secondname, Salary, DateOfBirth) values ($i, 'Aviva', 'Cordoba', 52, '2005-05-14')";
    echo "$i . <br/>";
    if ($mysqli->query($sql2)) {
        printf("Insert complete.<br />");
    }
    if ($mysqli->errno) {
        printf("error in insert %s", $mysqli->error);
    }
}
$sql = "SELECT StudentID, Firstname, Secondname, Salary, DateOfBirth From Student";

$result = $mysqli->query($sql);
if ($mysqli->errno) {

    printf("ERROR IN SELECT %s<br />", $mysqli->error);
    exit();
}

if ($result->num_rows > 0) {
    echo "<table border='2'>";
    while ($row = $result->fetch_assoc()) {
        printf("<tr><td>StudentId: %s </td> <td>Name: %s</td> <td>SecondName: %s</td><td> Salary %d</td> <td>DateOfBirth: %s</td></tr>",
            $row["StudentID"],
            $row["Firstname"],
            $row["Secondname"],
            $row["Salary"],
            $row["DateOfBirth"]);

    }
    echo "</table>";
} else {
    printf('No record found.<br />');
}
mysqli_free_result($result);
$mysqli->close();
?>
</body>
</html>