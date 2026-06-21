#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;
    if(n <= 4)
        cout << -1 << endl;
    else {
        for(int i = 0; i < (n+1)/2; i++)
            if(i != 2)
                cout << 2*i + 1 << " ";

        cout << "5 4 2 ";
        for(int i = 3; i < n/2 + 1; i++)
            cout << i*2 << " ";
        
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
		solve();

    return 0;
}
