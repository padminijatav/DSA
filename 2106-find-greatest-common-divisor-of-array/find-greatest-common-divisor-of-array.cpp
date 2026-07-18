class Solution {
public:
    int gcd(int a,int b){
        int ans=1;
        int i=1;
        while(i<=a || i<=b){
            if(a%i==0 && b%i==0){
                ans=max(ans,i);
            }
            i++;
        }
        return ans;
    }
    int findGCD(vector<int>& nums) {
        int mx=nums[0];
        int mini=nums[0];
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mini=min(mini,nums[i]);
        }
        return gcd(mx,mini);
    }
};