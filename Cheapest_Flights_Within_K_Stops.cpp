class Solution {
public:
    int ans=INT_MAX;
    void dfs(vector<vector<pair<int,int>>>&adj,int s,int d,int K,int curr_k,int val,vector<int>&vis)
    {
        static int check=0;
        if(K<curr_k) return;
        if(s==d)
        {
            ans=min(ans,val);
            check++;
            return;
        }
        vis[s]=1;
        for(auto a:adj[s])
        {
            if(vis[a.first]==0 and val+a.second<=ans)
            dfs(adj,a.first,d,K,curr_k+1,val+a.second,vis);
        }
        if(check>0) vis[s]=0;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int,int>>>adj(n);
        vector<int>vis(n,0);
        for(auto a:flights)
        {
            adj[a[0]].push_back({a[1],a[2]});
        }
        dfs(adj,src,dst,K,-1,0,vis);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3360/ */