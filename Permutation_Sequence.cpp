
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3366/
*/

class Solution {
public:
    string getPermutation(int n, int k) {
        string S="";
        for(int i=1;i<=n;i++) S += to_string(i);
        while(k>1)
        {
            next_permutation(S.begin(),S.end());
            k--;
        }
        return S;
    }
};