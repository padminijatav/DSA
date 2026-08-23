class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return 0;
        int op=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) continue;
            op+=nums[i-1]-nums[i]+1;
            nums[i]=nums[i-1]+1;
        }
        return op;
    }
};