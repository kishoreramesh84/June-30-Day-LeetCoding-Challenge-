
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/543/week-5-june-29th-june-30th/3375/
*/


class Solution {
public:
    int uniquePaths(int m, int n) {
        long long i,j,k;
        long long dp[m][n];
        for(i=0;i<n;i++) dp[0][i]=1;
        for(i=0;i<m;i++) dp[i][0]=1;
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return (int)dp[m-1][n-1];
    }
    
};