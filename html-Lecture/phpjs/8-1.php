<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
</head>
<body>
  <?php
    $password = $_GET["password"];
    // $_GET박스안에 들어있는 변수값과 8에 name값이 일치해야만 오류가 발생하지않는다.
    if($password == 1234) {
      echo "환영합니다.";
    } else {
      echo "로그인에 실패하였습니다.";
    }
  ?>
</body>
</html>
