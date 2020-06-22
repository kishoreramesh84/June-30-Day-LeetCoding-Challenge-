
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3368/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,res=0;
        for(i=0;i<32;i++)
        {
            int ct=0;
            for(auto a:nums)
            {
                if((a>>i)&1) ct++;
            }
            if(ct%3)
            {
                res |= (1<<i);
            }
        }
        return res;
    }
};

/* Time Complexity: O(32*n) */