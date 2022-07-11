<?php 

function euro2pln ($zlot,$var=0,$kursUK=33.7)
{if($var==0){
	$kantor=($zlot*$kursUK);
	return $kantor;}
	else {
		return $euro=$zlot/$kursUK;

	}
}
echo euro2pln (100,);
//jezeli po "(kwota),->  <- " piszemy 1 to bedziemy obliczali ile pieniend w euro, w przeciwnym wypadku ile jest naszej kwoty z Euro czyli	100EUR* kur=kwota i tak dalej
echo "<br>";
function liczSlow($znacz){
	$liczba= array("zero","jeden","dwa","trzy","cztery","piencz","szeszcz","siedem","osiem","dziewiec","dziesziec");
	echo $liczba[$znacz];
}

echo liczSlow(1);
 ?>
