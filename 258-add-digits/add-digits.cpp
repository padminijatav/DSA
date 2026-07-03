class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int s=0;
        while(num>=10){
            s=sum(num);
            num=s;
        }
        return num;
    }
};