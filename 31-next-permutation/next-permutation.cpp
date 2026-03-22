class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();

        int trg_idx = -1;

        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                trg_idx=i-1;
                break;
            }
        }

        if(trg_idx != -1){
            int lrg_idx=trg_idx;

            for(int i=n-1;i>trg_idx;i--){
                if(nums[i]>nums[trg_idx]){
                    lrg_idx=i;
                    break;
                }
            }
            swap(nums[trg_idx],nums[lrg_idx]);
        }

        reverse(nums.begin()+trg_idx+1 , nums.end());

    }
};