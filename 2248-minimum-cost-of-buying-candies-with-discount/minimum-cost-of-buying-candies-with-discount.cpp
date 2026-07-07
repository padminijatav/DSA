class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int total=0;
        int n=cost.size();
        for(int i=0;i<n;i++){
            if(i%3!=2){
                total+=cost[i];
            }
        }
        
        return total;
    }
};