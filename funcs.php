<?php

strlen('asdf')

define("GREETING", "Welcome to W3Schools.com!"); //constants 
echo GREETING;

$x = true; // boolean

$cars = array("Volvo","BMW","Toyota");	//array
var_dump($cars);
echo count($cars); // array length

// associative arrays aka dictionary
$age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
/**** OR ****/
$age['Peter'] = "35";
$age['Ben'] = "37";
$age['Joe'] = "43";

foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
} 

/* OOP */
class Car {
    function Car() {
        $this->model = "VW";
    }
}

// create an object
$herbie = new Car();

// show object properties
echo $herbie->model;


Concatenation 	$txt1 . $txt2
Concatenation assignment 	$txt1 .= $txt2

$t = date("H");
if ($t < "10") {
    echo "Have a good morning!";
} elseif ($t < "20") {
    echo "Have a good day!";
} else {
    echo "Have a good night!";
}

switch ($favcolor) {
    case "red":
        echo "Your favorite color is red!";
        break;
    case "blue":
        echo "Your favorite color is blue!";
        break;
    default:
        echo "Your favorite color is neither red, blue, nor green!";
}

foreach ($colors as $value) {
    echo "$value <br>";
}

// Default argument value
function setHeight($minheight = 50) {
    echo "The height is : $minheight <br>";
}

base64_decode('asdf')
base64_encode('asdf')
strrev('asdf')
hex2bin('3d3d516343746d4d6d6c315669563362')
mt_rand(0, 10)
pathinfo(filename, PATHINFO_EXTENSION)


// Superglobals
$GLOBALS
$_SERVER
$_REQUEST
$_POST
$_GET
$_FILES
$_ENV
$_COOKIE
$_SESSION


?> 
