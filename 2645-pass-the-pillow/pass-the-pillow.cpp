class Solution {
public:
    int passThePillow(int n, int time) {
        int round=time/(n-1);
        int ext=time%(n-1);

        if(round%2==0) return ext+1;
        else return n-ext;

        return 0;
    }
};