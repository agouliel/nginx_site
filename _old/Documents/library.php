<?php

include "parse_itunes_functions.php";

function parse_via_pcre($contents)
{
	preg_match("/Tracks<\/key>.*?<dict>(.*)<key>Playlists/s", $contents, $whole_match);
	
	preg_match_all("/<dict>(.*?)<\/dict>/s", $whole_match[1], $items);
	$songs=array();
	$j=0;
	foreach($items[1] as $value){
	
	preg_match_all("/<key>(.*?)<\/key>.*?<.*?>(.*?)<\/.*?>/s", $value, $elements);

		for($i=0; $i < count($elements[1]); $i++){
			$key=$elements[1][$i];
			$value=$elements[2][$i];
			$songs[$j][$key]=$value;
		}
		$j++;	
	}
	return $songs;
}


$fp=fopen("/Users/agou/Music/iTunes/iTunes Music Library.xml", "r");
$contents=fread($fp, filesize("/Users/agou/Music/iTunes/iTunes Music Library.xml"));
fclose($fp);
$songs=parse_via_pcre($contents);
usort($songs, "cmp");
echo array_to_table($songs, $to_display);

?>

