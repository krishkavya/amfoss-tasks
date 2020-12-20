let message ="Hi";
let interval =1;
let i=5; // number of times to send
let j=0;
let spamTimer= setInterval(function(){
         document.getElementsByClassName('composer_rich_textarea')[0].innerHTML=message;
         $('.im_submit_send').trigger('mousedown');
 j++;
 if(j==i)
 clearInterval(spamTimer);
 },i*1000);
