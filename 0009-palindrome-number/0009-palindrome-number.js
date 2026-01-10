/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let n = x.toString();
    let res = n.split('').reverse().join('');
    return res === n;
};