
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3371/
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,n=nums.size(),ans;
        for(i=0;i<n;i++)
        {
            if(nums[abs(nums[i])]<0) 
            {
                ans=abs(nums[i]);
                break;
            }
            else nums[abs(nums[i])]=-nums[abs(nums[i])];
        }
        return ans;
    }
};


/* Time Complexity: O(n)
   Space Complexity: O(1) */