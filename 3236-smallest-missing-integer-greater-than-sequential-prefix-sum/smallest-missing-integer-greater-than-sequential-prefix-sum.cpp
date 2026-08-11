class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }else{
                break;
            }
        }
        int ans=sum;
        unordered_set<int> s(nums.begin(),nums.end());

        while(s.count(ans)){
            ans++;
        }
        return ans;
    }
};