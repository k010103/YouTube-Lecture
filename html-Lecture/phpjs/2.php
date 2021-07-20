<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
</head>
<body>
  <!-- Javascript에서는 문자를 더할때도 +, 숫자를 더할때도 + -->
  <h1>Javascript</h1>
  <script>
    document.write(10+10);
    document.write("<br/>10"+"10");
  </script>
  <!-- php상으로는 문자열도 더하기가 되므로 문자을 더할때는 . 사용-->
  <h2>php</h2>
  <?php
    echo "10"+"10";
    echo "<br/>";
    echo "<br>\n10"."10";
    // <br> : 웹 페이지상으로 줄바꿈, \n : 웹페이지에서 확인하는 코드상으로 줄바꿈
    // 계산식옆에 줄바꿈을 붙힐려고하니 오류가 발생한다. 어떻게해야 해결할 수 있을까?
    // 평균적으로 이미있는 echo안에 넣지않고 새롭게 echo를 생성하여 줄바꿈을한다. ex) echo "<br/>"
  ?>
</body>
</html>
