class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int> t;
        int mx=INT_MIN;
        for(int i:nums){
            for(int j:nums){
                if(j==(-1*i)){
                    mx=max(i,mx);
                }
            }
        }
        if(mx==INT_MIN) return -1;
        return mx;
    }
};