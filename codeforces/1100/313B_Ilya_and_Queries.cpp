#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n, l, r;
    cin >> s >> n;
    vector<int> v(s.size(), 0), sum(s.size(), 0);
    for (int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) v[i] = 1;
        sum[i] += sum[i - 1] + v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        cout << sum[r - 1] - sum[l - 1] << endl;
    }
    return 0;
}