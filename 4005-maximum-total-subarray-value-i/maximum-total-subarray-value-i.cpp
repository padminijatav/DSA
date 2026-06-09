class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int gmin=nums[0],gmax=nums[0];
        for(int n:nums){
            gmin=min(n,gmin);
            gmax=max(n,gmax);
        }
        long long maxtotal=gmax-gmin;
        return maxtotal*k;
    }
};