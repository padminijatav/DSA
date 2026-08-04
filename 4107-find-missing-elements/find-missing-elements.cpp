class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int ,int> f;
        for(int i:nums){
            f[i]++;
        }
        sort(nums.begin(),nums.end());

        int mini=nums[0];
        int maxi=nums[n-1];
        for(int i=mini;i<=maxi;i++){
            if(f[i]==0) ans.push_back(i);
        }
        return ans;
    }
};