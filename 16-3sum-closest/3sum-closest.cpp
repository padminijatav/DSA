class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result;
        int n = nums.size();
        int diff = INT_MAX;
        int sum ;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-2;i++){
            int left =i+1;
            int right = n-1;
            while(left<right){
                sum = nums[i]+nums[left]+nums[right];
                if(sum==target)
                return sum;
                else if(sum<target){
                    if(diff>(target-sum)){
                        diff =target-sum;
                        result = sum;
                    }
                    left++;
                }else{
                    if(diff>(sum-target)){
                        diff = sum-target;
                        result = sum;
                    }
                    right--;
                }
            }
        }
        return result;
    }
};