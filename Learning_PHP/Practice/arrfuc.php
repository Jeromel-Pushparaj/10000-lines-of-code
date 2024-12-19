<?php

print("The elements in array which is created by range function:<br>");
foreach (range(1, 31) as $numbers) { //here the range function help us to creat a set  of array by giving start and end
    //you can also give char where to start and end
    echo("$numbers<br>\n");
}
//here we are going to see the arrfuc

$simplearr = array(1,3,54,5,2,6);

$asso_arr = array( //this the syntax to create a associative array
    1=>"jeromel",
    2=>"jefferson",
    3=>"jothi jackulin",
    4=>"jebaraj justin"

);
//Here we are going to see the function called array_key_exist() 

if(array_key_exists(1,$asso_arr)){//it basically search for us if the key is exists or no if it exists it returns true if not returns false
    print("The value of the key 1 is $asso_arr[1]");
}