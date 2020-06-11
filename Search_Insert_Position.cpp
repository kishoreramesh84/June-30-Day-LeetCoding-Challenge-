/*Algorithm:
1) This problem can be solved in O(logN) using binary search.
2) If the given target element is present in the array,then return the index of the element.
3) Else return the upper bound index of the element(i.e) next greater number of that element.
	Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3356/
	Time Complexity: O(logN)
	Space Complexity: O(1)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int diff=INT_MAX,l,r,mid,ans;
        l=0,r=nums.size()-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else 
            {
                if(nums[mid]-target < diff)
                {
                    diff=nums[mid]-target;
                    ans=mid;
                }
                r=mid-1;
            }
        }
        if(diff==INT_MAX) return l;
        return ans;
    }
};