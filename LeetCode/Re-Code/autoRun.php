<?php
// Include the file containing the functions
include (__DIR__.'/Testing.php');

// Get all defined functions
$all_functions = get_defined_functions();

// Extract user-defined functions
$user_functions = $all_functions['user'];

$methodCount = count($user_functions);

$lastMethodName = $user_functions[$methodCount-1];
print("\nProblem Ouput For '$lastMethodName':\n");
print("\n");
$lastMethodName();
print("\n\n");
//To Run: php -d error_reporting=E_ERROR script.php


