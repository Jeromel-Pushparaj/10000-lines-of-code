<?php
$relation = array('Father','Mother','First Son','Second Son');
$name = array('Jebaraj Justin','Jothi Jackulin','Jeromel Pushparaj','Jefferson Thangaraj');

$result = array_combine($relation,$name);//here we are using arrfunc call array_combine() which will combine the two array and create a associative array.
// First array is act as key and second as value.

?>
<pre>
    <?
    print_r($result);
    //this function is so easy to create associative arry
 ?>
</pre>