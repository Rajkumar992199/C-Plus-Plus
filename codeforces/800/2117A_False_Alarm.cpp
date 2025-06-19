#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int front = 0, back = n - 1;
        vector<int> door(n);
        for (int i = 0; i < n; i++) cin >> door[i];
        while (door[front] != 1 && front < n) front++;
        while (door[back] != 1 && back >= 0) back--;
        if (back - front > x - 1) cout << "NO\n";
        else cout << "YES\n"; 
    }
}