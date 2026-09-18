class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lptr = 0;
        int rptr = nums.size()-1;
        while(lptr<rptr){
            if(nums[lptr] + nums[rptr] == 0){
                return nums[rptr];
            }
            else if(nums[lptr] + nums[rptr] > 0){
                rptr--;
            }
            else if(nums[lptr] + nums[rptr] < 0){
                lptr++;
            }
        }
        return -1;
    }
};