class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int ,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int v=nums[i];
            if(mp.find(v) != mp.end() && i-mp[v]<=k) return true;
            mp[v]=i;
        }
        return false;
        
    }
};