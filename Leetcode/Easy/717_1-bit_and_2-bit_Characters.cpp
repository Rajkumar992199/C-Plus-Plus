class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        vector<int> type;
        for(int i = 0; i < n; i++) {
            if(bits[i] == 1) {
                type.push_back(1);
                i++;
            }
            else type.push_back(0);
        }
        if(type[type.size() - 1] == 0) {
            return true;
        }
        return false;
    }
};