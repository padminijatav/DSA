class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> next;
        for(int i=0;i<nums2.size();i++){
            for(int j=i+1;j<nums2.size();j++){
                if(nums2[i]<nums2[j]) {
                    next[nums2[i]]=nums2[j];
                    break;
                }
                else next[nums2[i]]=-1;
            }
        }
        next[nums2[nums2.size()-1]]=-1;
        vector<int> greater;
        for(int i=0;i<nums1.size();i++){
            greater.push_back(next[nums1[i]]);
        }
        return greater;

    }
};