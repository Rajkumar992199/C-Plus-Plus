#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, temp = 0;
	cin >> n;

    vector<int> a(n), b(n, 0);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = n - 1; i >= 0; i--) {
        temp = max(temp, a[i]);
        if(temp > 0)
            b[i] = 1;
        temp--;
    }
    
    for(int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
