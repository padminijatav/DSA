class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int sum=0;
            int og=nums[i];
            while(og>0){
                int r=og%10;
                sum+=r;
                og/=10;
            }
            nums[i]=sum;
            i++;
        }

        for(int i=0;i<n;i++){
            if(nums[i]==i) return i;
        }
        return -1;
    }
};