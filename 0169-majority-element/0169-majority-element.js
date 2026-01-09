/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
   let count = 1;
   let ans = nums[0];
   for(let i=1; i<nums.length; i++){
    if(ans == nums[i]) count++;
    else if(count == 0){
        ans = nums[i];
        count = 1;
    }
    else count--;
   }
   return ans;
};