class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int a1=nums[0];
        int a2=nums[1];
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i=2;i<nums.size();i++){
            if(a1>a2){
                a1=nums[i];
                arr1.push_back(a1);
            }else{
                a2=nums[i];
                arr2.push_back(a2);
            }
        }

        vector<int> res;
        for(int i:arr1) res.push_back(i);
        for(int i:arr2) res.push_back(i);
        return res;

    }
};