/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
        let n = nums.length;
        let s = 0 ;
      let e = n - 1;
        while(s<e){
             let mid = Math.floor(s + (e - s) / 2);
            if(nums[mid] < nums[mid+1])
             s = mid + 1;
             else
             e = mid;
        }
        return s;
};