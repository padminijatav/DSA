class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int i=0,j=n-1;
        int idx=0;
        while(idx<n){
            if(nums[idx]%2==0) {
                res[i]=nums[idx];
                i++;
            }else{
                res[j]=nums[idx];
                j--;
            }
            idx++;
        }
        return res;
    }
};