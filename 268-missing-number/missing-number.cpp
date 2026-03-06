class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        while(x<=nums.size()){
            for(int i=0;i<nums.size();i++){
                if(x==nums[i]) x++;
                else return x;
            }
        }
        return -1;
    }
};