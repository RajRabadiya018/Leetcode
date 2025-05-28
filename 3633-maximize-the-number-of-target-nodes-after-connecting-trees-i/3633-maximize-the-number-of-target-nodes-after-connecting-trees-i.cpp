class Solution {
public:
    int bfs(vector<int>adj[],int k,int node,int n){
        queue<int>q;
        vector<bool>vis(n,false);
        int cnt=k>=0?1:0;
        q.push(node);
        vis[node]=1;
        while(!q.empty() && k>0){
           int size=q.size();
           while(size--){
            int x=q.front();q.pop();
            for(auto it:adj[x]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                    cnt++;
                }
             }
           }
          k--;
        }
        return cnt;
    }
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n=edges1.size(),m=edges2.size(),maxi=0;
        vector<int>adj1[n+1],adj2[m+1];
        for(auto it:edges1){
            adj1[it[0]].push_back(it[1]);
            adj1[it[1]].push_back(it[0]);
        }
        for(auto it:edges2){
            adj2[it[0]].push_back(it[1]);
            adj2[it[1]].push_back(it[0]);
        }
        for(int i=0;i<=m;i++){
            maxi=max(maxi,bfs(adj2,k-1,i,m+1));
        }
    
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=bfs(adj1,k,i,n+1)+maxi;
        }
        return ans;
    }
};