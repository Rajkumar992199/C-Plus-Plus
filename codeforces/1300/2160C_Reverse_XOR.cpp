#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
   	cin >> n;
   
    string s;

    int temp = n;
    // reverse binary representation
    while(temp) { 
        s += (temp % 2) + '0';
        temp /= 2; 
    }

    int l = 0, r = s.size() - 1, t = 0;

    // trimming the front zeros
    for(int i = 0; i < s.size(); i++) { 
        if(s[i] == '0')
            l++;
        else
            break;
    }

    // if trimmed binary have middle zero then answer is "NO"
    if(((s.size() - l) % 2) && (s[l + (s.size() - l) / 2] == '1')) {
        cout << "NO\n";
        return;
    }

    // remaining string must be palinrome
    while(l < r) {
        if(s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            t = 1;
            break;
        }
    }

    if(t)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}