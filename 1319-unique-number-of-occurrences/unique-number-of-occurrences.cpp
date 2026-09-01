class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> freq;
        for(int i:arr) freq[i]++;

        set<int> ans;
        for(auto& x:freq) ans.insert(x.second);

        return freq.size()==ans.size();
    }
};