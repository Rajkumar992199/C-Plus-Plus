class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(char c: s) {
            if(c == 'b')
                b = true;
            else if(b && c == 'a')
                return false;
        }
        return true;
    }
};