class Solution {
public:
    int getnum(int n){
        int res=0;
        while(n!=0){
            int r=n%10;
            res+=r*r;
            n=n/10;
        }
        return res;
    }
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            n=getnum(n);
        }
        if(n==1) return true;
        return false;
    }
};