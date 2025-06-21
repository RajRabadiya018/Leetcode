class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];
        int maxpro = 0;
        int n = prices.size();

        for(int i = 1 ; i < n ; i++){
            if(prices[i] > bestbuy){
                maxpro = max(maxpro , prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxpro;
    }
};