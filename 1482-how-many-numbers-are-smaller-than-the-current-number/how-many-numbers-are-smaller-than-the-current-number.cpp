class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int ,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<int> count;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(const auto& [key,value]:freq){
                if(key<nums[i]){
                    c+=value;
                }
            }
            count.push_back(c);
        }
        return count;
    }
};