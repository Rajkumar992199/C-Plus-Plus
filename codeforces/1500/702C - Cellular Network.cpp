#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int r = 0, i = 0, j = 0;

    for (int i = 0; i < n; i++) {
        while (j < m && b[j] < a[i]) 
            j++;

        int d = INT_MAX;
        if (j < m)  
            d = min(d, b[j]-a[i]);     
        if (j > 0)  
            d = min(d, a[i]-b[j-1]); 
        r = max(r, d);
    }

    cout << r << '\n';

    return 0;
}