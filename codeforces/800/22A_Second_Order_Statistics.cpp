#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, cnt = 0;
    cin >> n;

    set<int> s;
    while (n--) {
        cin >> x;
        s.insert(x);
    }

    for(auto it: s) {
        if(cnt) { //2nd element of set
            cout << it;
            return 0;
        }
        cnt++;
    }
    cout << "NO";

    return 0;
}