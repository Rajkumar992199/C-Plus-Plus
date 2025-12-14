#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    long long n, s = 0, m1 = 0, m2 = 0;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s += x;
    }
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(x > m1)
            swap(m1, x);
        if(x > m2)
            m2 = x;
    }
    if(s <= m1 + m2)
        cout << "YES";
    else
        cout << "NO";
}
