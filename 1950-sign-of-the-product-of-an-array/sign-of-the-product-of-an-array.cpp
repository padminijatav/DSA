class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign=1;
        for(int i:nums){
            if(i==0) return 0;

            if(i>0 && sign==1) sign=1;
            else if(i<0 && sign==1) sign =-1;
            else if(i>0 && sign==-1) sign=-1;
            else sign=1;
        }
        return sign;
    }
};