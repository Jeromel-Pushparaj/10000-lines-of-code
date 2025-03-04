<?php

include (__DIR__.'/Solutions.php');

$solution = new Solution();

function ContainsDuplicate():void{
    global $solution;
    $nums=[1, 3,2,4,5,4];
    $result = $solution->containsDuplicate($nums) ? "true" : "false";
    print("ContainsDuplicate: $result \n");
}

function isAnagram(): void{
    global $solution;

    $s = "malayalam";
    $t = "malayalam";

    $result = $solution->isAnagram($s, t: $t) ? "Anagram" : "Not a Anagram";
    print($result);
}

function twoSum(){
    global $solution;
    $nums = [4, 5, 3, 2, 6];
    $target = 9;

    $result = $solution->twoSum($nums, $target);
    print_r($result);
}

/**
 * Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 *Example 1:
 *Input: strs = ["eat","tea","tan","ate","nat","bat"]
 *Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 *
 * @return void
 */
function groupAnagrams(){
    global $solution;
    $strs = ["eat","tea","tan","ate","nat","bat"];
    $result = $solution->groupAnagrams($strs);
    print_r($result);
}
?>