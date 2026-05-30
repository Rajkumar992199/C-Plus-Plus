class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, b = 0;
        for(int i = 0; i < moves.size(); i++) {
            if(moves[i] == 'L')
                l++;
            else if(moves[i] == 'R')
                r++;
            else
                b++;
        }
        return abs(l - r) + b;
    }
};