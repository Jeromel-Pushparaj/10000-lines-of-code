<?php
//we can comment single line using this syntax
/*you 
comment 
multiline
*/
$name = "jeromel"; //we can able to intialize the variable start with $ symbol in php

//Printing in php

//this give the same result we use it in this different way as you like 
printf("My name is %s\n",$name);
print("My name is $name" . "\n");
print("MY Name is" . $name . "\n"); //use the dot operator to concadinate string
echo("MY Name is $name" . "\n");

//Note : If you are using single quote around the string the variable inside will not detected
print('My name is $name' . $name . "\n");

//How to write the multiple line of string
//You can see in below one \n is recoganized by the string 
$mulstr = <<<EOF
jeromel
pushparaj 
is a good 
guy as much I know 
he love jesus so much \n 
EOF;
//but here \n will recogonized by this way 

$mulstr1 = <<<'EOF'
YOU can 
do it above
one in
this way 
also \n
EOF;

//Arithmetic operation
$num = 1 + 3;
$num1 = 4-5;
$num2 = 4*3;
$num3 = 4/5;

//shorthand operator
$sum = $sum + 1;
$sum++;
$sum += 1;

//Data types
$int = 134;
$float = 2.4442;
$bool1 = True; //First off all php is inksencitive like TruE,TRUE,true are all same it's goes for false also
$bool2 = False;
$str = "string";
?>

<?php
//Here we are using a If statement
if($bool1==true){
?>  
<div class="card" style="width: 18rem;">
    <img src="image.jpg" class="card-img-top" alt="...">
    <div class="card-body">
        <h5 class="card-title">Hey! I'm Jeromel</h5>
        <p class="card-text">I am this competition conductor. I am so excited to se you all guy's in competition.</p>
        <a href="https://www.linkedin.com/in/jeromel-pushparaj-092a4b253?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BQp3sfCRzS7qwwOvHZSabdQ%3D%3D" class="btn btn-primary">Know me</a>
    </div>
<?php
    
    Print($card);
}
?>