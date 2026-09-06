class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        double avg=0.0;
        int mx=INT_MIN;
        int mn=INT_MAX;
        
        for(int i:salary){
            mx=max(mx,i);
            mn=min(mn,i);
        } 

        for(int i:salary){
            if(i==mx || i==mn) continue;
            avg+=i;
        }
        avg/=(n-2);
        return avg;
    }
};