class Solution {
public:
    int digiSum(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=r;
            n/=10;
        }
        return sum;
    }
    int countEven(int num) {
        int cnt=0;
        for(int i=2;i<=num;i++){
            if(digiSum(i)%2==0) cnt++;
        }
        return cnt;
    }
};