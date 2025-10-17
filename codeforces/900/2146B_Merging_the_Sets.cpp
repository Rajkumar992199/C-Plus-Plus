#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
	ll n, m, c = 0; // no. of sets, upper bound, counter
    cin >> n >> m;
    vector<set<ll>> a(n); // vector of sets
    map<ll, ll> ma; // map for colculating count of numbers
    for(int i = 0; i < n; i++) {
        ll l; // size of set
        cin >> l;
        for(ll j = 0; j < l; j ++){
            ll x; // number from the set
            cin >> x;
            a[i].insert(x); // input number from the set
            ma[x]++; // occurrences of number
        }
    }
    for(int i = 1; i <= m; i++)
        if(!ma[i]) { // if number is missing then invalid
            cout << "NO\n";
            return;
        }
        
    for(int i = 0; i < n; i++) {
        bool f = 0;
        for(auto x : a[i]) {
            if(ma[x] < 2) { // count of number = 1 or 0
                f = 1;
                break;
            }
        }
        if(!f) c++; 
        if(c == 2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}