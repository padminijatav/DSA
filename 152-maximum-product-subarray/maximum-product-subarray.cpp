class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long ans=nums[0];
        long long maxprod=nums[0];
        long long minprod=nums[0];

        for(int i=1;i<nums.size();i++){
            long long cur=nums[i];

            if(cur<0) swap(minprod,maxprod);

            maxprod=max(cur,maxprod*cur);
            minprod=min(cur,minprod*cur);
            ans=max(ans,maxprod);
        }
        return (int)ans;
    }
};