class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> f1;
        for(int i:nums1){
            f1[i]++;
        }
        unordered_map<int,int> f2;
        for(int i:nums2){
            f2[i]++;
        }
        int ans=INT_MAX;
        for(int i:nums1){
            if(f2[i]!=0){
                ans=min(ans,i);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};