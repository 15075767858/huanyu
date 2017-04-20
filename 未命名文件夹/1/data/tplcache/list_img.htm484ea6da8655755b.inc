<?php
$z[0]=Array("field","",250,269);
$z[0][4]['name']="title";
$z[1]=Array("global","",270,296);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",336,365);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",404,462);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1248,1283);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1458,1842);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\n    <li id='leftMenu_101001'><a href='[field:typeurl/]'>[field:typename/]</a></li>\n    ",1852,1980);
$z[6][4]['type']="son";
$z[7]=Array("field","",1997,2019);
$z[7][4]['name']="position";
$z[8]=Array("list","\n    <li>\n      <div class='img-holder'><a href='[field:arcurl/]'  target='_blank'><img src='[field:litpic/]' alt='[field:title/]' width='216' height='159' border='0' /></a></div>\n      <a href='[field:arcurl/]'>[field:title/]</a></li>\n    ",2072,2363);
$z[8][4]['pagesize']="15";
$z[8][4]['titlelen']="36";
$z[9]=Array("pagelist","",2469,2535);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2550,2585);
$z[10][4]['filename']="foot.htm";

?>