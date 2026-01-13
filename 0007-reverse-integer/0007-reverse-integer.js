/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(number) {

let temp = Math.abs(number);
let n = 0;
while(temp>0){
    let last = temp%10;
    n = n*10 + last;
    temp = Math.floor(temp/10);
}
//if(number < 0) return n *=-1;

    if (n > 2**31) {
        return 0;
    }
    
return n * Math.sign(number);

};