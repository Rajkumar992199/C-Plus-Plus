#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
	cin >> n >> s; 

	for (char c = 'a'; c <= 'z'; c++) {
		if (s.find(c) == string::npos) {
			cout << c << endl;
            return;
		}
	}
	for (char c1 = 'a'; c1 <= 'z'; c1++) {
		for (char c2 = 'a'; c2 <= 'z'; c2++) {
			string tmp = "";
			tmp.push_back(c1);
			tmp.push_back(c2);

			if (s.find(tmp) == string::npos) { 
				cout << tmp << endl;
                return;
            }
		}
	}

	for (char c1 = 'a'; c1 <= 'z'; c1++) {
		for (char c2 = 'a'; c2 <= 'z'; c2++) {
			for (char c3 = 'a'; c3 <= 'z'; c3++) {
				string tmp = "";
				tmp.push_back(c1);
				tmp.push_back(c2);
				tmp.push_back(c3);

				if (s.find(tmp) == string::npos) {
					cout << tmp << endl;
                    return;
                }
			}
		}
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) 
		solve();

	return 0;
}

