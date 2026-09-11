class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0,sum=0;
        for(int i:nums){
            if(i%2==0 && i%3==0){
                sum+=i;
                count++;
            }
        }
        if (count==0) return 0;
        return sum/count;
    }
};