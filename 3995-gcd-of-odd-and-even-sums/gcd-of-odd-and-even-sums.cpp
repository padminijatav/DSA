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
        int sumEven=0,sumOdd=0;
        int Ce=0,Co=0;
        for(int i=2;Ce<n;i=i+2) {
            sumEven+=i;
            Ce++;
        }
        for(int i=1;Co<n;i=i+2) {
            sumOdd+=i;
            Co++;
        }
        return gcd(sumEven,sumOdd);
    }
};