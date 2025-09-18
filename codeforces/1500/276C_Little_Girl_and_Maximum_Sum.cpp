#include <bits/stdc++.h>
using namespace std;

int a[200100], b[200100], val[200100];

int main()
{
    int n, q;
	cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < q; i++) {
        int l, r;
		cin >> l >> r;
        l--, r--;
        val[l]++;
        if (r < n-1) val[r+1]--;
    }
    int v = 0;
    for(int i = 0; i < n; i++) {
        v += val[i];
        b[i] = v;
    }
    sort(b, b + n);
    long long res = 0;
    for(int i = 0; i < n; i++)
        res += (b[i] * 1ll * a[i]);
    cout << res << endl;
    return 0;
}