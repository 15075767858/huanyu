<li>
                                <h3>
                                    <a href='{dede:field name=' typeurl'/}' class="depth_2"><span class="icon10"></span>{dede:field
                                    name='typename'/}</a>
                                </h3>
                                <ul>
                                    {dede:sql sql='Select * from dede_arctype where reid=~id~ ORDER BY id limit 00,20'}
                                    <li><a href="[field:typedir function='str_replace(" {cmspath}","",@me)'/]"
                                        class="depth_3">[field:typename/]</a></li>
                                    {/dede:sql}
                                </ul>
                            </li>