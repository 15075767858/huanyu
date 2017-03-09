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
$z[8]=Array("list","\n        <li><span class='newal'><a href='[field:arcurl/]'>[field:title/]</a></span><span class='newar'>[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span></li>\n        ",2126,2355);
$z[8][4]['pagesize']="10";
$z[8][4]['titlelen']="100";
$z[9]=Array("pagelist","",2426,2492);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("arclist","\n        <li><a href='[field:arcurl/]' title='[field:title/]'>[field:title/]</a></li>\n        ",2693,2854);
$z[10][4]['row']="10";
$z[10][4]['titlelen']="40";
$z[10][4]['orderby']="rand";
$z[11]=Array("include","",2894,2929);
$z[11][4]['filename']="foot.htm";

?>