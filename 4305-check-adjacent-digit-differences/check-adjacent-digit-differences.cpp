class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int diff=0;
        int n=s.length();
        int i=0;
        while(i<n-1){
            int d1=s[i]-'a';
            int d2=s[i+1]-'a';
            int d=abs(d1-d2);
            diff=max(diff,d);
            i++;
        }
        if(diff<=2) return true;
        return false;
    }
};