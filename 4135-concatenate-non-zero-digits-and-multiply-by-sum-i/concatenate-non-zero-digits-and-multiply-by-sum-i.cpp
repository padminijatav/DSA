class Solution {
public:
    long long sumAndMultiply(int n) {
        long sum=0;
        long x=0;
        int dec=1;
        while(n>0){
            int digit =n%10;
            if(digit!=0){
                sum+=digit;
                x+=digit*dec;
                dec*=10;
            }
            n/=10;
        }
        return sum*x;
    }
};