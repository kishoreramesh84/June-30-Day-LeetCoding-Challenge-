/*Algorithm:
1) Initialize three variables to count 0,1,and 2.
2) Find number of 0,1 and 2 by traversing the array.
3) Change the values of array using the count of 0,1,2.

	This problem can also solved using swapping.
	Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/
	Time Complexity: O(N)
	Space Complexity: O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(auto a:nums)
        {
            cnt0+=a==0;
            cnt1+=a==1;
            cnt2+=a==2;
        }
        for(auto &a:nums)
        {
            if(cnt0>0) a=0,cnt0--;
            else if(cnt1>0) a=1,cnt1--;
            else a=2,cnt2--;
        }
    }
};