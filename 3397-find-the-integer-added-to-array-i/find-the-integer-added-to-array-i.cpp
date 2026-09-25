class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        // int diff=nums1[0]-nums2[0];

        // int i=1,j=1;
        // while(i<n){
        //     int d=nums1[i]-nums2[i];
        //     if(d!=diff) return 
        // }
        return nums2[0]-nums1[0];
    }
};