
var imgs = ["1.jpg","2.jpg","3.jpg","4.jpg","5.jpg","6.jpg","7.jpg"]

function writePaper(title,number){
	win = window.open("http://www.huanyuwj.com/dede/article_add.php?channelid=1&cid=21")
	setTimeout(function(){
		win.$("#cke_8_label").trigger("click")
		win.document.getElementById("title").value=title
		win.$("textarea[dir=ltr]")[0].value='<img alt="" src="/skin/images/slzp/'+imgs[number]+'" style="width: 640px; height: 480px;" />'
		
		
	},1000)
	setTimeout(function(){
	win.$(win.$("input[name=imageField]")[1]).trigger("click")		
	},2000)
	setTimeout(function(){
	win.close()
	},3000)
}

for(var i=0;i<imgs.length;i++){
	(function(number){
		setTimeout(function(){
			writePaper("塑料制品",number)
		},number*4000)
	})(i)
}
