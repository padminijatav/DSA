class Solution {
public:
    int gcd(int a,int b){
        int ans=INT_MIN;
        int i=1;
        while(i<=a && i<=b){
            if(a%i==0 && b%i==0){
                ans=max(ans,i);
            }
            i++;
        }
        return ans;
    }
    int gcdOfOddEvenSums(int n) {
        int sumEven=n*n,sumOdd=n*(n+1);
        return gcd(sumEven,sumOdd);
    }
};