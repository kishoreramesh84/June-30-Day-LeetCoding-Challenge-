
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3364/ 
   Time Complexity: O(log N) */

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l,r,ans=0,mid,n=citations.size(),diff;
        l=0,r=n-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            diff=n-mid;
            if(diff<=citations[mid])
            {
                ans=diff;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};