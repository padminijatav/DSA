class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> t;
        for(int i:nums){
            t[i]++;
        }
        int n=nums.size();
        vector<int> res;
        for(int i=1;i<=n;i++){
            if(t[i]==0) res.push_back(i);
        }
        return res;
    }
};