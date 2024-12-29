<?php
$nums = [2, 7, 11, 15];

$target = 9;

$map = [];

for($i=0;$i<=count($nums); $i++){
  $complement = $target - $nums[$i];
  if(array_key_exists($complement, $map)){
    print_r([$map[$complement], $i]);
  }
  $map[$nums[$i]] = $i;
}
