/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let absV = Math.abs(x);
    let absR = absV.toString().split('').reverse().join('');

    if(absR > 2**31) return 0;

    return absR * Math.sign(x);


};