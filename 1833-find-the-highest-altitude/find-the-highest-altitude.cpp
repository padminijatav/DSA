class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude={0};
        int a=0,j=0;
        for(int i=0;i<gain.size();i++){
            altitude.push_back(altitude[a]+gain[j]);
            a++,j++;
        }
        int high=altitude[0];
        for(int i=0;i<altitude.size();i++){
            high=max(high,altitude[i]);
        }
        return high;
            
        
    }
};