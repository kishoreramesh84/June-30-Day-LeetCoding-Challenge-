

/*Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3367/ */

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n,m,i,j,k;
        n=dungeon.size();
        if(n==0) return 0;
        m=dungeon[0].size();
        int dp[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                dp[i][j]=INT_MAX;
            }
        }
        dp[n][m-1]=1;
        dp[n-1][m]=1;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                dp[i][j]=min(dp[i][j+1],dp[i+1][j])-dungeon[i][j];
                if(dp[i][j]<1) dp[i][j]=1;
            }
        }
        return dp[0][0];
    }
};
