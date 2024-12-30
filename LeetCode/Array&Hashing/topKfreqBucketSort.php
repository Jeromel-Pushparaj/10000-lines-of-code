<?php

class Solution{

  public function topKfrequency($nums, $k){
    $map = [];
    $freq = [[]];

    for($i=0;$i<count($nums); $i++){
      if(isset($map[$nums[$i]])){
        $map[$nums[$i]]++;
      }
      else{
        $map[$nums[$i]] = 1;
      }
    }
    for($j=0;$j<count($nums);$j++){
      $freq[] = [];
    }
    foreach($map as $num=>$cnt){
      $freq[$cnt][] = $num;
    }

    $result = [];

    for($h=count($freq)-1; $h>=1;$h--){
      foreach ($freq[$h] as $r){
        $result[] = $r;
        if(count($result)==$k){
          return $result;
        }
      }
    }
  }
}

$nums = [1,1,3,3,4,3,2,1,3,2,6];
$k = 3;

$Solution = new Solution();

print_r($Solution->topKfrequency($nums, $k));
