class Solution {
public:
    int prod(int n){
        int prod=1;
        while(n!=0){
            int r=n%10;
            prod*=r;
            n/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(prod(n)%t!=0) n++;
        return n;
    }
};