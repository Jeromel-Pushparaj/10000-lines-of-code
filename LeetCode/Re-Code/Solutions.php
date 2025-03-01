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
    public function isAnagram(string $s, string $t): bool{
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

    /**
     * Summary of twoSum
     * @param array $nums
     * @param int $target
     * @return array<int|mixed>|null
     */
    public function twoSum(array $nums, int $target){
        $map = [];

        for($i=0;$i<=count($nums); $i++){
            $complement = $target - $nums[$i];
            if(array_key_exists($complement, $map)){
                return [$map[$complement], $i];
            }
            $map[$nums[$i]] = $i;
        }
        return null;
    }
}
?>