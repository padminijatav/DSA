class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            int r=numBottles%numExchange;
            int d=numBottles/numExchange;
            ans+=d;
            numBottles=r+d;
        }
        return ans;
    }
};