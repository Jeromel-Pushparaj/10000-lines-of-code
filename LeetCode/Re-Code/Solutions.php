<?php
class Solution{

    /**
     * Summary of containsDuplicate
     * @param array $nums
     * @return bool
     */
    function containsDuplicate(array $nums): bool{
        $set=[];
        for($i=0;$i<=count($nums); $i++){
            if(isset($set[$nums[$i]])){
                return true;
            }else{
                $set[$nums[$i]] = true;
            }
        }
        return false;
    }

    /**
     * Summary of isAnagram
     * @param string $s
     * @param string $t
     * @return bool
     */
    function isAnagram(string $s, string $t): bool{
        return false;
    }
}