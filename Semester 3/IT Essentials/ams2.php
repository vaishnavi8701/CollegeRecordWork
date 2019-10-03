<?php
   $num = $_POST['data'];
   $temp = $num;
   $count=0;
   $sum=0;
   while($temp > 1)
    {
     $count++;
     $temp=$temp/10;
    }
    $temp = $num;
   while($temp >1)
    {
     $a=$temp%10;
     $sum=$sum+pow($a,$count);
     $temp=$temp/10;
    }
    if($sum == $num)
     {
      echo"$num is an Amstrong Number.\n";
     }
    else
      {
      echo "$num is Not a Amstrong Number.\n";
      }
  ?>
