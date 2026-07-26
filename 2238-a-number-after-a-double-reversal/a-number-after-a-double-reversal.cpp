class Solution {
public:
    int reverse(int n){
        int ans=0;
        while(n>0){
            int d=n%10;
            ans=ans*10 +d;
            n/=10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int r1=reverse(num);
        int r2=reverse(r1);
        return num==r2;
    }
};