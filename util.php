<?php

$path = $_REQUEST['path'];
$a = scandir($path);

echo json_encode($a);