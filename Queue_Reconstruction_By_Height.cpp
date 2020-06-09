class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());
        int i,j,n=people.size();
        vector<vector<int>>ans(n,vector<int>(2,-1));
        for(auto &xy:people)
        {
            int ct=xy[1];
            for(j=0;j<n;++j)
            {
                if(ans[j][0]==-1 and ct==0)
                {
                    ans[j][0]=xy[0];
                    ans[j][1]=xy[1];
                    break;
                }
                else if(ans[j][0]==-1 or ans[j][0]>=xy[0])
                    ct--;
            }
        }
        return ans;
    }
};


/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/
   Time Complexity: O(N*N)