/*Algorithm:
1) If number is <= 0, then definitely it is not power of two.
2) If bitwise AND (&) of N and N-1 is 0,then it is power of two.

Proof: 
	Example: 8(1000) => N 
			 7(0111) => N-1 
			 N&(N-1) => (1000)&(0111) => 0 

Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3354/
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0) return 0;
        return !(n&(n-1));
    }
};