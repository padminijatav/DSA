class Solution {
public:
    int range(int i){
        int mini=INT_MAX;
        int maxi=INT_MIN;
        while(i>0){
            int d=i%10;
            mini =min(mini,d);
            maxi=max(maxi,d);
            i/=10;
        }
        return maxi-mini;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxRange=INT_MIN;
        for(int i:nums){
            maxRange=max(maxRange,range(i));
        }
        int ans=0;
        for(int i:nums){
            int r=range(i);
            if(r==maxRange){
                ans+=i;
            }
        }
        return ans;
    }
};