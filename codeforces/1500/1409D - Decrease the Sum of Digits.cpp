#include<bits/stdc++.h>
using namespace std;

void solve() {
    string n, need = "0";
	int s, digit = 0;
    cin >> n >> s;

    need += n;
    for(char c: n)
        digit += c - '0';

    int idx = need.size()-1;
    while(digit > s) {
        digit -= need[idx] - '1';
        while(need[idx-1] == '9') {
            need[idx] = '0';
            idx--;
            digit -= 9;
        }
        need[idx] = '0';
        idx--;
        need[idx]++;
    }

    cout << stoll(need) - stoll(n) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}