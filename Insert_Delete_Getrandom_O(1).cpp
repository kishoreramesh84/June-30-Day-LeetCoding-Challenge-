
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3358/ */


class RandomizedSet {
public:
    vector<int>elements;
    map<int,int>mp;
    /** Initialize your data structure here. */
    RandomizedSet() {
        elements.clear();
        mp.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mp.find(val)==mp.end())
        {
            elements.push_back(val);
            mp[val]=elements.size()-1;
            return 1;
        }
        return 0;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return 0;
        auto it=mp.find(val);
        int last=elements.back();
        elements[it->second]=last;
        mp[last]=it->second;
        elements.pop_back();
        mp.erase(it);
        return 1;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return elements[rand()%elements.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */