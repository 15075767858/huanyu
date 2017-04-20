<?php
$z[0]=Array("global","",78,104);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("channelartlist","\n                <li><a title=\"{dede:field name='typename'/}\" href=\"{dede:field name='typeurl'/}\">{dede:field\n                    name='typename'/}</a>\n                    <dl>\n                        {dede:channel type='son' noself='yes'}\n                        <dd><a title=\"[field:typename/]\" href=\"[field:typeurl/]\">[field:typename/]</a></dd>\n                        {/dede:channel}\n                    </dl>\n                </li>\n                ",734,1242);
$z[1][4]['typeid']="top";
$z[2]=Array("global","",7989,8014);
$z[2][4]['name']="cfg_cmsurl";
$z[3]=Array("channelartlist","\n                            <li>\n                                <h3>\n                                    <a href='{dede:field name=' typeurl'/}' class=\"depth_2\"><span class=\"icon10\"></span>{dede:field\n                                    name='typename'/}</a>\n                                </h3>\n                                <ul>\n                                    {dede:sql sql='Select * from dede_arctype where reid=~id~ ORDER BY id limit 00,20'}\n                                    <li><a href=\"[field:typedir function='str_replace(\" {cmspath}\",\"\",@me)'/]\"\n                                        class=\"depth_3\">[field:typename/]</a></li>\n                                    {/dede:sql}\n                                </ul>\n                            </li>\n                            ",8734,9600);
$z[3][4]['typeid']="13";
$z[4]=Array("arclist","\n                            <div class=\"limg\">\n                                <a class=\"img\" href=\"[field:arcurl/]\" title=\"[field:title/]\"></a>\n                                <a class=\"wor\" href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a>\n                            </div>\n\n                            ",10562,10958);
$z[4][4]['typeid']="13";
$z[4][4]['titlelen']="50";
$z[4][4]['orderby']="pubdate";
$z[5]=Array("arclist","\n                        <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">\n                            <div class=\"imgborder\">\n                                <img class=\"imgfra\" src=\"[field:picname/]\" alt=\"[field:title/]\"/>\n                            </div>\n                            <div class=\"acright\">\n                                <h4>[field:title/]</h4>\n                                <p class=\"accon\">　　[field:info/]...</p>\n                            </div>\n                        </a></li>\n                        ",11551,12185);
$z[5][4]['typeid']="13";
$z[5][4]['row']="6";
$z[5][4]['titlelen']="50";
$z[5][4]['orderby']="pubdate";
$z[5][4]['infolen']="300";

?>