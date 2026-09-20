class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int x=1;
        for(char c:s){
            int d=26-(c-'a');
            ans+=d*x;
            x++;
        }
        return ans;
    }
};