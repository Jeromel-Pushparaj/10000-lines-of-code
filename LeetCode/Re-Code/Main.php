<?php

include "./Solutions.php";

$nums=[1, 3,2,4,5,4];
$solution = new Solution();
$result = $solution->containsDuplicate($nums) ? "true" : "false";
print("ContainsDuplicate: $result \n");

?>