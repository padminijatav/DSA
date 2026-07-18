class Solution {
public:
    bool isThree(int n) {
        if( n==1 || n<=0 || n==2 || n==3 ) return false;
        int i=1;
        int count=0;
        while(i<=n){
            if(n%i==0) count++;
            i++;
        }
        return count==3;

    }
};