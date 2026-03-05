class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int str=0;
        int end=nums.size()-1;
        int mid;
        while(str<=end){
            mid=(str+end)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                str=mid+1;
            }else{
                end=mid-1;
            }
        }
        return str;
    }
};