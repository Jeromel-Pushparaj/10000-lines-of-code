<?php
$os1 = "windows";
$os2 = "linux";
$os3 =  "macos";

$oscom = array('os2','os3');
$result = compact('os1',$oscom);//it actually creating a associating array using already existing variables and it's value
?>
<pre>
    <?
print_r($result);
?>
</pre>
