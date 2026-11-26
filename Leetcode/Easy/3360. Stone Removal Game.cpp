class Solution {
public:
    bool canAliceWin(int n) {
        int num = 10;
        bool alice = true;
        while (n >= num) {
            n -= num;
            num--;
            alice = !alice;
        }
        return !alice;
    }
};