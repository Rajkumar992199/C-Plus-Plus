#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, x, y = INT_MIN, temp;
    cin >> n;
    vector<int> a(n);
    multimap<int, int> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> x;
        b.insert({a[i], x});
    }
    for (auto it : b) {
        if (it.second < y) {
            if (it.first != temp) {
                cout << "Happy Alex";
                return 0;
            }
        }
        temp = it.first;
        y = it.second;
    }
    cout << "Poor Alex";
    return 0;
}