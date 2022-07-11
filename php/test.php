<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=, initial-scale=1.0">
	<title>test</title>
</head>
<body>
	<?php 
	require ("country.php");

$lab=3;
echo "$lab"."<br>";
echo '$lab';
foreach ($country as $kye => $value) {
	 echo $value ['Code']."     ".$value['Population']."<br>";
}
	 ?>
</body>
</html>
