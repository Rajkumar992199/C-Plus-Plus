#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    vector<int> v1(m, 0), v2(m, 0);
    if (9 * m < s || (s == 0 && !(m == 1))) cout << "-1 -1";
    else {
        int temp = s, i = 1;
        while (temp > 0) {
            if (temp > 9) {
                v1[m - i] = 9;
                temp -= 9;
            }
            else {
                if(m - i == 0) v1[m - i] = temp;
                else {
                    v1[m - i] = temp - 1;
                    v1[0] = 1;
                }
                break;
            }
            i++;
        }
        i = 0;
        while (s > 0) {
            if (s > 9) {
                v2[i] = 9;
                s -= 9;
            }
            else {
                v2[i] = s;
                break;
            }
            i++;
        }
        for(auto it : v1) cout << it;
        cout << " ";
        for(auto it : v2) cout << it;
    }
    return 0;
}
