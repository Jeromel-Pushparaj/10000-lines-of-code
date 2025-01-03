<?php

class Solution{
  public function product_of_array_expect_itself($nums){
    $prefix = array_fill(0, count($nums), 1);
    $postfix = array_fill(0,count($nums), 1);

    for($i=1;$i<count($nums); $i++){
      $prefix[$i] = $nums[$i-1] * $prefix[$i-1];
    }
    for($i=count($nums)-2; $i>-1;$i--){
      $postfix[$i] = $nums[$i+1] * $postfix[$i+1];
    }
    for($i=0; $i<count($nums); $i++){
      
      $res[$i] = $prefix[$i] * $postfix[$i]; 
    }
    return $res;
  }
}
$nums = [1, 2, 3, 4];
$solution = new Solution();

print_r($solution->product_of_array_expect_itself($nums));
