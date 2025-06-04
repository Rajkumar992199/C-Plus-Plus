#include <bits/stdc++.h>
using namespace std;

unordered_set<long long> cube;

void cubes() {
    long long N = 1000000000000;
    for (long long i = 1; i * i * i <= N; i++) 
        cube.insert(i * i * i);
} 

void solve() {
    long long x;
    cin >> x;
    for (long long i = 1; i * i * i <= x; i++) {
        if (cube.count(x - i * i * i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    cubes();
    int t;
    cin >> t;
    while (t--) solve();
}