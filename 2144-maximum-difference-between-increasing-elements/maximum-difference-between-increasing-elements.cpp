class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int d=nums[j]-nums[i];
                diff=max(diff,d);
            }
        }
        if(diff==INT_MIN || diff<=0) return -1;
        return diff;
    }
};