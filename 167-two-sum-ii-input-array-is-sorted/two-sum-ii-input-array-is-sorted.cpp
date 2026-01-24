class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=1;
        int j=numbers.size();
        int sum=0;
        while(i!=j || i<j){
            sum = numbers[i-1]+ numbers[j-1];
            if(sum==target){
                return {i,j};
            }else if (sum<target) i++;
            else j--;
        }
        return {};
    }
};