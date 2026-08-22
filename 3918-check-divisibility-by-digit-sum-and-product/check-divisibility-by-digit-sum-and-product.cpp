class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int copy=n;
        while(copy>0){
            int r=copy%10;
            sum+=r;
            product*=r;
            copy/=10;
        }
        return n%(sum+product)==0;
    }
};