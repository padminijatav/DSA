class Solution {
public:
    int count(int i){
        int count=0;
        while(i>0){
            int r=i%10;
            count++;
            i/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;

        for(int i:nums){
            if(count(i)%2==0) ans++;
        }
        return ans;
    }
};