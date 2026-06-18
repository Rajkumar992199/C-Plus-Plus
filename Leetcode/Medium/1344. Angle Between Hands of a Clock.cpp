class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = abs(30 * (hour % 12) - (11 / 2.0) * (minutes));
        if(ans > 180) 
            ans = 360 - ans;
        return ans;
    }
};