class Solution {
public:
    int ans;
    void find(vector<int>&coins,int x,int i,int curr)
    {
        if(x==curr)
        {
            ans++;
            return;
        }
        if(x<curr) return;
        for(int l=i;l<coins.size();l++)
        {
            find(coins,x,l,curr+coins[l]);
        }
    }
    int change(int n, vector<int>& coins) {
        vector<int>dp(n+1,0);
        dp[0]=1;
        int i,j;
        sort(coins.begin(),coins.end());
        for(i=0;i<coins.size();i++)
        {
            for(j=coins[i];j<=n;j++)
            {
                dp[j] += dp[abs(j-coins[i])];
            }
        }
        return dp[n];
    }
};

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/
   Time Complexity: O(n*len(coins))
   Space Complexity: O(n) */