#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, l = 1, r = n;
    cin >> n;
    vector<int> a(n);
    r = n;
    for(int i = n - 1; i > -1; i -= 2) {
        a[i] = r;
        if(i - 1 > -1)
            a[i - 1] = l;
        l++;
        r--;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}