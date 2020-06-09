class Solution {
public:
    vector<int>inner;
    int n;
    Solution(vector<int>& w) {
        n=w[0];
        inner.push_back(w[0]);
        for(int i=1;i<w.size();i++)
        {
            n += w[i];
            inner.push_back(n);
        }
    }
    
    int pickIndex() {
        int random_num=(rand())%n;
        return upper_bound(inner.begin(),inner.end(),random_num)-inner.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */