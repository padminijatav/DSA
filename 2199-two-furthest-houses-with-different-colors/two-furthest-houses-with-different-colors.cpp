class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxdis=INT_MIN;
        int n=colors.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    int dis =abs(i-j);
                    maxdis=max(maxdis,dis);
                }
            }
        }
        return maxdis;

    }
};