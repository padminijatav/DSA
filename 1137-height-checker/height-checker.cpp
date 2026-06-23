class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int mx=heights[0];
        for(int i:heights){
            mx=max(i,mx);
        }
        vector<int> freq(mx+1,0);
        for(int i:heights){
            freq[i]++;
        }
        vector<int> expected(heights.size(),0);
        int idx=0;
        for(int i=1;i<=mx;i++){
            while(freq[i]!=0){
                expected[idx]=i;
                freq[i]--,idx++;
            }
        }
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]) c++;
        }
        return c;
    }
};