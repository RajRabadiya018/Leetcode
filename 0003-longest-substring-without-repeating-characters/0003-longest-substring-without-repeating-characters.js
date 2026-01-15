/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let res = 0;
    for(let i=0;i<s.length;i++){
        let char = new Set();
        for(let j=i ; j<s.length; j++){
            if(char.has(s[j])) break;
            else {
                char.add(s[j]);
                res = Math.max(res, j-i+1);
            }
        }
    }
    return res;
};