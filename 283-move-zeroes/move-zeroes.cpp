class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res(nums.size());
        int k=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                res[k]=nums[i];
                k++;

            }
            i++;
        }
        nums=res;

    }
};