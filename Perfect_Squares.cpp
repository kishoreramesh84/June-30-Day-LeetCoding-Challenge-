

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3373/
*/


class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0]=0;
        vector<int>nums;
        int i,j;
        for(i=1;i*i<=n;i++)
        {
            nums.push_back(i*i);
        }
        for(i=1;i<=n;i++)
        {
            dp[i]=INT_MAX;
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]<=i and dp[i-nums[j]]!=INT_MAX)
                {
                    dp[i]=min(dp[i],dp[i-nums[j]]+1);
                }
            }
        }
        return dp[n];
    }
};