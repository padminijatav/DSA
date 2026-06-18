class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mins=minutes*6;
        double hrs=30*hour +(0.5*minutes);
        double diff=abs(mins-hrs);
        return min(diff,360-diff);
    }
};