/*Algorithm:
1) Store the difference of costs between city A and city B and index for each person in separate array or vector.
2) Sort that difference array or vector using the difference of costs.
3) Initialize a variable with zero to return the answer.
4) Add first N/2 persons city A cost to where index is taken from that difference array.
5) Add last N/2 persons city B cost and return the answer variable.

    Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/
    Time Complexity: O(NlogN)
    Space Complexity: O(N)
*/


class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0,i,j,n=costs.size();
        vector<pair<int,int>>vec;
        for(i=0;i<n;i++)
        {
            vec.push_back({costs[i][0]-costs[i][1],i});
        }
        sort(vec.begin(),vec.end());
        for(i=0;i<n/2;i++)
        {
            ans += costs[vec[i].second][0];
        }
        for(;i<n;i++)
        {
            ans += costs[vec[i].second][1];
        }
        return ans;
    }
};