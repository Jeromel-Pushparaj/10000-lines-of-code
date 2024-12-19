<?php
$asso_arr = array( //this the syntax to create a associative array
    3=>"jeromel",
    4=>"jefferson",
    2=>"jothi jackulin",
    1=>"jebaraj justin"

);

//now we are going to do the ksort()

ksort($asso_arr);
foreach($asso_arr as $keys => $values){
    echo("$keys => $values<br>\n");
}