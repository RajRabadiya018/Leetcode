class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0;
        int rp = height.size() - 1;
        while(lp < rp){
            int w = rp - lp;
            int ht = min(height[lp],height[rp]);
            int area = w*ht;
            maxwater = max(maxwater , area);
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxwater;
    }
};