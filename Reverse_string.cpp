/*Algorithm:
1) Initialize one pointer with zero and other pointer with length of string - 1.
2) Swap these pointers till they are equal.

	Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/
	Time Complexity: O(N/2) => O(N)
	Space Complexity: O(1)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            swap(s[i],s[j]);
        }
    }
};