class Solution {
public:
    int countElements(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i:nums){
            mx=max(mx,i);
            mn=min(mn,i);
        }

        int c=0;
        for(int i:nums){
            if(i!=mx && i!=mn) c++;
        }

        return c;
    }
};