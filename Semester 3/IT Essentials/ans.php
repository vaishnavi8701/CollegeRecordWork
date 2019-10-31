<?php
        if(isset($_POST['req']))
	{
                $n = $_POST['num'];
                $temp = $n;
                $sum = 0;
                $count = 0;
                while($temp > 0)
                {
                    $count++;
                    $temp = (int)($temp / 10); 
                }
                $temp = $n;
                while($temp > 0){
                    $rem = $temp % 10;
                    $sum = $sum + pow($rem, $count);
                    $temp = (int)($temp / 10);
                }
                if($sum == $n)
                {
                    echo 'Given number is Armstrong';
                }
          	else
                {
                    echo 'Not an Armstrong number';
                }
        }
?>
