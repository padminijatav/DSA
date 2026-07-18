class Solution {
public:
    int smallestEvenMultiple(int n) {
       int ans=0;
       int i=n;
       while(ans==0){
        if(i%n==0 && i%2==0){
            ans=i;
        }
        i++;
       }
       return ans;
    }
};