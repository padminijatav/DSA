class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count=0;
        int ans=INT_MAX;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    int a=intervals[i][0];
                    int b=intervals[i][1];

                    int c=intervals[j][0];
                    int d=intervals[j][1];

                    if(c<=a && b<=d) {
                        count++;
                        break;
                    }
                }
            }
        }
        return n-count;
    }
};