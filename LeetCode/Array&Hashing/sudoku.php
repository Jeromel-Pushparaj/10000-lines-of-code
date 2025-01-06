<?php
class Solution {

    /**
     * @param String[][] $board
     * @return Boolean
     */
    function isValidSudoku($board) {
        $cols = [];
        $rows = [];
        $squares = [];

        for($r=0;$r<9;$r++){
            for($c=0;$c<9;$c++){
                if($board[$r][$c] == "."){
                    continue;
                }
                $squarePos = (int)($r/3) * 3 + (int)($c / 3);
                if((isset($rows[$r]) && in_array($board[$r][$c], $rows[$r])) or  
                   (isset($cols[$c]) && in_array($board[$r][$c], $cols[$c])) or  
                   (isset($squares[$squarePos]) && in_array($board[$r][$c], $squares[$squarePos]))){
                        return false;
                    }

                $rows[$r][] = $board[$r][$c];
                $cols[$c][] = $board[$r][$c];
                $squares[$squarePos][] = $board[$r][$c];
            }
        }
        return true;
    }
}

$board = 
  [[".",".",".",".","5",".",".","1","."],
  [".","4",".","3",".",".",".",".","."],
  [".",".",".",".",".","3",".",".","1"],
  ["8",".",".",".",".",".",".","2","."],
  [".",".","2",".","7",".",".",".","."],
  [".","1","5",".",".",".",".",".","."],
  [".",".",".",".",".","2",".",".","."],
  [".","2",".","9",".",".",".",".","."],
  [".",".","4",".",".",".",".",".","."]];

$solution = new Solution();
$result = $solution->isValidSudoku($board);
print(var_dump($result)); 
