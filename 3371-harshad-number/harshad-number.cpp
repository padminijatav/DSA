class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int temp=x;
        int r=0;
        while(temp>0){
            r=temp%10;
            sum+=r;
            temp/=10;
        }
        if(x%sum!=0) return -1;
        return sum;
    }
};