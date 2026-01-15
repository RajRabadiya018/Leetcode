/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if(strs.length === 0) return "";

    let prefix = strs[0];

    for(let ind=1; ind<strs.length; ind++){
        while(strs[ind].indexOf(prefix) !== 0){
            prefix = prefix.substring(0,prefix.length-1);
        }
    }
    return prefix;
};



// while(strs[index].indexof(prefix)!==0)
// prefix = prefix.substring(0,prefix.length-1)