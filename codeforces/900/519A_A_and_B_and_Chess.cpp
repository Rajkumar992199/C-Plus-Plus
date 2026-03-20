#include <iostream>
using namespace std;

int main() {
    string s;
    int sum = 0;
    for(int i = 0; i < 8; i++) {
        cin >> s;
        for(int j = 0; j < 8; j++) {
            if(s[j] < 'a') {
                if(s[j] == 'Q')
                    sum += 9;
                else if(s[j] == 'R')
                    sum += 5;
                else if(s[j] == 'B')
                    sum += 3;
                else if(s[j] == 'N')
                    sum += 3;
                else if(s[j] == 'P')
                    sum += 1;
            }
            else {
                if(s[j] == 'q')
                    sum -= 9;
                else if(s[j] == 'r')
                    sum -= 5;
                else if(s[j] == 'b')
                    sum -= 3;
                else if(s[j] == 'n')
                    sum -= 3;
                else if(s[j] == 'p')
                    sum -= 1;
            }
        }
    }
    if(sum > 0)
        cout << "White";
    else if(sum < 0)
        cout << "Black";
    else 
        cout << "Draw";
}
