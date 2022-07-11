<?php 
class osoba {
	const GROMADA="ssaki";
protected $imie='jan', $nazwisko;
	public function __get ($arg1){
		return $this->$arg1;
	}
public function __construkt (){
	echo "<br> ";

}
public function __destrukt(){
	
}


public function __set ($arg1 , $arg2 ){
	if ($arg1=='imie' or $arg1 == 'nazwisko')
		$this->arg1=$arg2;
	else echo "Brak dostempu ";


}
public function powitanie()
{
	echo "<br>witaj $this->imie $this->nazwisko";
}

}
$student = new osoba ();
$student -> nazwisko="Kowalski-Nowak"

 ?>