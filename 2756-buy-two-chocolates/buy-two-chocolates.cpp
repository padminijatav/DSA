class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());

        int minc=prices[0]+prices[1];

        if(minc<=money) return money-minc;
        else return money;
    }
};