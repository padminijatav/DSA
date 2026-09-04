class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        for(vector c:accounts){
            int w=0;
            for(int i:c){
                w+=i;
            }
            mx=max(w,mx);
        }
        return mx;
    }
};