#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, c = 0;
    cin >> n;
    set<long long> a;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.insert(x);
    }
    for(auto x : a) {
        if(c != x)
            break;
        c++;
    }
    cout << c << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
