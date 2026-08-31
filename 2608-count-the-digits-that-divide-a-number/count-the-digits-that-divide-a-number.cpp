class Solution {
public:
    int countDigits(int num) {
        if(num<11) return 1;
        int count =0;
        int og=num;
        while(num>0){
            int r=num%10;
            if(r!=0 && og%r==0) count++;

            num/=10;
        }
        return count;
    }
};