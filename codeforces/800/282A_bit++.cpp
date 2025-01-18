#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cin >> i;
    int x = 0;
    char ch[3];
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < 3; k++){
        cin >> ch[k];
        }
        if (ch[0] == '+' || ch[2] == '+') {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x;
}