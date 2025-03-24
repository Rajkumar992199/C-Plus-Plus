#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (log2(n) != trunc(log2(n))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}