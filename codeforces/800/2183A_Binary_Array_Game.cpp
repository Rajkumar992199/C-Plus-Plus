#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, o = -1, l = -1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l;
        if(o == -1)
            o = l;
    }

    if(l + o == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}