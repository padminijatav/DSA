class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()), nums.end());
        int n=nums.size();
        int first = nums[n-1];
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return nums[1];
        return nums[n-3];
    }
};