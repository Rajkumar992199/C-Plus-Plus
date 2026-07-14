#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n; 
    vector<string> v(n); 
    for(int i = 0; i < n; i++) 
        cin >> v[i];

	int a, b, c, d, e, f, g, h; 
    a = c = e = g = INT_MIN; 
    b = d = f = h = INT_MAX;
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) { 
            if(v[i][j] == '#') {
			    a = max(a,i+j), b = min(b,i+j), c = max(c,i-j), d = min(d,i-j),
			    e = max(e,i), f = min(f,i), g = max(g,j), h = min(h,j);
            }
        }
    }
	if(a-b <= 1 || c-d <= 1 || (e-f <= 1 && g-h <= 1))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
	int t; 
    cin >> t; 
    while(t--) 
        solve();

    return 0;
}