<?php
$count_my_page = ("hitcounter.txt");
$hits = file($count_my_page);
$hits[0] ++;
$fp = fopen($count_my_page , "w");
fputs($fp , "$hits[0]");
fclose($fp);
$sysdate = date("d/m/y : H:i:s", time());
$visitorSite = $_SERVER['HTTP_REFERER'];
$visitorIP = $_SERVER['REMOTE_ADDR'];
$visitorHost = $_SERVER['REMOTE_HOST'];
$visitors = ("visitors.txt");
$fpv = fopen($visitors , "a");
fputs($fpv , "$sysdate\t$visitorIP\t$visitorHost\t$visitorSite\n");
fclose($fpv);
?>
