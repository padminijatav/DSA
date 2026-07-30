class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        int idx=0;
        for(int i=0;i<n;i++){
            ans[i]=nums[idx];
            ans[i+n]=nums[idx];
            idx++;
        }
        return ans;
    }
};