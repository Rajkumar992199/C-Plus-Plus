#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n, x, y, z;
    bool flag = 0; // initializing flag
    cin >> s >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        z = 0;
        cin >> x >> y;
        z = mp[x]; // storing bonus if strength already exist
        mp[x] = y + z; // if strengths are same then making sum of bonus
    }
    for (auto it : mp) {
        if (it.first < s) s += it.second; // adding bonus if strength is less then Kirito
        else {
            flag = 1; // if strength is higher then setting flag
            break;
        }
    }
    if (!flag) cout << "YES";
    else cout << "NO";
    return 0;
}