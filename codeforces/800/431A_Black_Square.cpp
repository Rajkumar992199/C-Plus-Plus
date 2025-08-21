#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);
    long long ans = 0;
    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
    for(int i = 0; i < s.size(); i++) 
        ans += a[s[i] - '1'];
    cout << ans;
    return 0;
}