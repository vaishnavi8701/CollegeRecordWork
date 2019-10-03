<!DOCTYPE html>
<html>
<body>
<form method="post">
    <p>Enter your number here: </p>
	<input type="text" name="data" id="data"><br><br>
    <input type="submit" name="submit">
</form>
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
   while($temp > 1)
    {
     $a=$temp%10;
     $sum=$sum+pow($a,$count);
     $temp=$temp/10;
    }
    if($sum == $num)
     {
      echo"The Given $num is a Amstrong Number.\n";
     }
    else
      {
      echo "The Given $num is Not a Amstrong Number.\n";
      }
  ?>
</body>
</html>