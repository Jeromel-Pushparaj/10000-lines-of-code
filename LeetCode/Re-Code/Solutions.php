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
    function isAnagram(string $s, string $t){
        if(strlen($s)!=strlen($t)){
            return false;
        }
        $freq = array();
        for($i=0;$i<=strlen($s);$i++){
            $freq[ord($s[$i]) - ord("a")] = $freq[ord($s[$i]) - ord("a")] + 1;
            $freq[ord($t[$i]) - ord("a")] = $freq[ord($t[$i]) - ord("a")] - 1;
        }
        
        foreach ($freq as $f){
            if($f!=0){
                return false;
            }
        }
        return true;
        
    }
}