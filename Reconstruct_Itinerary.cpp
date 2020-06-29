

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3374/
*/

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        map<string,multiset<string>>mp;
        vector<string>ans;
        for(auto &a:tickets)
        {
            mp[a[0]].insert(a[1]);
        }
        stack<string>st;
        st.push("JFK");
        while(!st.empty())
        {
            string x=st.top();
            if(mp[x].size()==0)
            {
                ans.push_back(x);
                st.pop();
            }
            else
            {
                auto it=mp[x].begin();
                st.push(*it);
                mp[x].erase(it);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};