class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> f;
        for(int i:nums) f[i]++;
        vector<int> res(2,0);
        for(int i=1;i<=nums.size();i++){
            if(f[i]==2) res[0]=i;

            if(f[i]==0) res[1]=i;
        }

        return res;
    }
};