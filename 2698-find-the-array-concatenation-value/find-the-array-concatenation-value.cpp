class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(i==j){
                ans+=nums[i];
                break;
            }
            string s=to_string(nums[i])+to_string(nums[j]);
            ans+=stoi(s);
            i++;
            j--;
        }
        return ans;
    }
};