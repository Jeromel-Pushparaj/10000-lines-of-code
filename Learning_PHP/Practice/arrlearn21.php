<?php
//this below code is explaining the function of array which is give product value of integer array
$int = array(1,5,64,73,7,9);

//Now in the above array contains integer now we need that array procduct means we can use array_porduct()



echo("The product of the array is " . array_product($int) . " <br> \n");

//the below program is to understand the array function called array_diff_uassoc()
function key_compare_func($a, $b)
{
    if ($a === $b) {
        return 0;
    }
    return ($a > $b) ? 1 : -1;
}

$array1 = array("a" => "green", "b" => "brown", "c" => "blue", "red");
$array2 = array("a" => "green", "yellow", "red");
$result = array_diff_uassoc($array1, $array2, "key_compare_func"); //this function basicall give a show or loop through the associative array and intake any callback and give to it
print_r($result);
