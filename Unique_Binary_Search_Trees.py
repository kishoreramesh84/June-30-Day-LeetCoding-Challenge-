
''' Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3370/
'''


class Solution:
    def numTrees(self, n: int) -> int:
        num=factorial(2*n)
        deno=factorial(n+1)*factorial(n);
        return num // deno