class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i:nums){
            mx=max(i,mx);
            mn=min(mn,i);
        }
        for(int i:nums){
            if(i!=mn && i!=mx) return i;
        }
        return -1;
    }
};