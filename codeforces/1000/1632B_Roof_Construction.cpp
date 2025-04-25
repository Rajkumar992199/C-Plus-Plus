#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = log2(n - 1);
        int count = pow(2, m) - 1;
        for (int i = count; i >= 0; i--) cout << i << " ";
        for (int i = count + 1; i < n; i++) cout << i << " ";
        cout << endl;
    }
    return 0;
}