<?php 
require("country.php");
$tekst=explode('.', $tekst);
  for ($i=0;$i<20;$i++) 
 	echo $tekst[$i]."<br>";
 foreach ($country as $Code=> $name) {
 	echo $name["Code"]."      ".$name["Name"]."       ".$name["Population"]."<br>";
 }
 /*$country[]= array ('Code'=>'POL',' Name' =>'Poland' ,'SurfaceArea'=>'323 250' ,'Population '=> '38 422 346','HeadOfState '=>'Andrzej Duda');*/
 echo "<br>";
  foreach ($country as $Code=> $name) {
 	if ($name['Population']>30000000) {
 		echo $name['Population']."     ".$name['Name']."<br>";
 	}
 }
  ?>