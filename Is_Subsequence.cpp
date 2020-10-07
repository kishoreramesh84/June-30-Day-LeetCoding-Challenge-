class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j=0;
        int n=t.size();
        for(i=0;i<n;i++)
        {
            if(j<s.size() and s[j]==t[i])
            {
                j++;
            }
        }
        return j==s.size();
    }
};

/* Problem Link: https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/
   Time Complexity: O(max(len(s),len(t))) => O(N)
   Space Complexity: O(1)
*/