<?php
class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $k
     * @return Integer[]
     */
    function topKFrequent($nums, $k) {
       $mp = [];
       for($i=0; $i<count($nums);$i++){
        if(isset($mp[$nums[$i]])){
            $mp[$nums[$i]]++;
        }else{
            $mp[$nums[$i]] = 1;
        }
       } 
       arsort($mp);
       $result = array_keys($mp);

       $result = array_slice($result, 0, $k);
       return $result;
    }
}
