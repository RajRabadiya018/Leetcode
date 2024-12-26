class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxwater = 0;
       int lp = 0;
       int n =  height.size();
       int rp = n-1;
       while(lp<rp){
        int w = rp - lp;
        int h = min(height[lp] , height[rp]);
        int area = w * h;
        maxwater = max(maxwater , area);

        height[lp] < height[rp] ? lp++ : rp--;
       }
       return maxwater;
    }
};