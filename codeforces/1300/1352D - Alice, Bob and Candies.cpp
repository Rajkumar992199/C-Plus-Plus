#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int i = 1, j = n-1, last = a[0], cur = 0;
    int move = 1, alice = a[0], bob = 0;
    bool moved = true;

    while(i <= j) {
        if(!moved) { // alice
            while(cur <= last && i <= j) {
                cur += a[i];
                i++;
            }

            alice += cur;
            moved = true;
        }
        else { // bob
            while(cur <= last && i <= j) {
                cur += a[j];
                j--;
            }

            bob += cur;
            moved = false;
        }
        
        last = cur;
        move++;
        cur = 0;
    }
    cout << move << " " << alice << " " << bob << '\n';
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