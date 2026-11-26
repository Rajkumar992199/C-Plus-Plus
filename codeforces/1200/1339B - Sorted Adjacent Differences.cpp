#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());

    int l = (n-1)/2, r = l+1;

    while(l >= 0) {
        cout << a[l] << " ";
        l--;
        if(r < n)
            cout << a[r] << " ";
        r++;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}