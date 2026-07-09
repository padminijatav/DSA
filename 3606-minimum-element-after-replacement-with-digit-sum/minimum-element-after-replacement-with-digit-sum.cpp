class Solution {
public:
    int sum(int i){
        int res=0;
        while(i>0){
            int rem=i%10;
            res+=rem;
            i/=10;
        }
        return res;
    }
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int x:nums){
            x=sum(x);
            ans=min(ans,x);
        }
        return ans;
    }
};