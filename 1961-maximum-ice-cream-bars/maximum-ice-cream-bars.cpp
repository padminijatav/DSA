class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_cost = costs[0];
        for(int x:costs){
            max_cost=max(max_cost,x);
        }
        vector<int> count(max_cost+1,0);
        int n=costs.size();
        for(int x:costs){
            count[x]++;
        }
        int idx=0;
        for(int i=1;i<=max_cost;i++){
            while(count[i]!=0){
                costs[idx]=i;
                idx++,count[i]--;
            }
        }
        int c=0;
        int i=0;
        while(i<costs.size() && coins!=0){
            if(costs[i]<=coins){
                coins-=costs[i];
                c++;
            }
            i++;
        }
        return c;

    }
};