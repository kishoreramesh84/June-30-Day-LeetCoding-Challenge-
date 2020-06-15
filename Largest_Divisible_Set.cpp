class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n,i,j,k,ans=1;
        n=nums.size();
        vector<int>ret;
        if(n==0) return ret;
        vector<int>dp(n,1);
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 and (1+dp[j])>dp[i])
                {
                    dp[i]=1+dp[j];
                    ans=max(ans,dp[i]);
                    //cout<<ans<<" ";
                }
            }
        }
        int prev=-1;
        for(i=n-1;i>=0;i--)
        {
            if(dp[i]==ans and (prev%nums[i]==0 or prev==-1))
            {
                ans--;
                ret.push_back(nums[i]);
                prev=nums[i];
            }
        }
        return ret;
    }
};

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3359/
   Time Complexity: O(n*n)

*/