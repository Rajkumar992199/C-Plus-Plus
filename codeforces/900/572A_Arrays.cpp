#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, m, k;
    cin >> A >> B >> m >> k;
    vector<long long> a(A), b(B);
    long long x, y;
    for(int i = 0; i < A; i++) {
        cin >> a[i];
        if(i == m - 1) 
            x = a[i];
    }
    for(int i = 0; i < B; i++) {
        cin >> b[i];
        if(i == B - k) 
            y = b[i];
    }
    if(x < y)
        cout << "YES\n";
    else 
        cout << "NO\n";
    return 0;
}
