class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int ,int> f;
        for(int i:nums) f[i]++;
        int sum=0;

        for(int i:nums){
            if(f[i]==1) sum+=i;
        }
        return sum;
    }
};