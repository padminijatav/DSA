class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int occ=0;
        for(int i=0;i<jewels.size();i++){
            occ+=count(stones.begin(),stones.end(),jewels[i]);
        }
        return occ;
    }
};