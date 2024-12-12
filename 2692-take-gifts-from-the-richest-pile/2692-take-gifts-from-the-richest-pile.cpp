class Solution {
public:
    #define ll long long
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto it: gifts) pq.push(it);

        while(k--){
            int x = pq.top();
            pq.pop();
            pq.push(sqrt(x));
        }
        ll ans = 0LL;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};