#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(4);
    set<int> s;
    int temp;
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
        s.insert(x[i]);
    }
    if ((s.size() > 2) && (abs(x[0] - x[2]) != abs(x[1] - x[3])) && (x[0] != x[2] && x[1] != x[3])) cout << -1;
    else {
        if(x[0] == x[2]) {
            temp = abs(x[1] - x[3]);
            if (x[0] + temp > 1000) temp = 0 - temp;
            cout << x[0] + temp << " " << x[1] << " " << x[2] + temp << " " << x[3];
        } 
        else if(x[1] == x[3]) {
            temp = abs(x[0] - x[2]);
            if (x[1] + temp > 1000) temp = 0 - temp;
            cout << x[0] << " " << x[1] + temp << " " << x[2] << " " << x[3] + temp;
        }
        else {
            cout << x[0] << " " << x[3] << " " << x[2] << " " << x[1];
        }
    }
}