class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());

        long long maxsum=0;
        int j=n/2;
        for(int i=0;i<j;i++){
            maxsum-=nums[i];
        }
        for(int i=j;i<n;i++){
            maxsum+=nums[i];
        }

        
        return maxsum;
    }
};