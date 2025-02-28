<?php

include (__DIR__.'/Solutions.php');

$solution = new Solution();

function ContainsDuplicate(){
    global $solution;
    $nums=[1, 3,2,4,5,4];
    $result = $solution->containsDuplicate($nums) ? "true" : "false";
    print("ContainsDuplicate: $result \n");
}

function isAnagram(){
    global $solution;

    $s = "malayalam";
    $t = "malayalam";

    $result = $solution->isAnagram($s, $t) ? "Anagram" : "Not a Anagram";
    print($result);
}
?>