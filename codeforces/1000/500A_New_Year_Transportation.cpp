#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t, sum = 1, a;
    cin >> n >> t;
    for (int i = 1; i <= n; i++){
        cin >> a;
        if (sum == 1 || i == sum) {
            sum += a;
            if (i == t) {
                cout << "YES";
                break;
            }
        }
        if (i == n) cout << "NO";
    }
    return 0;
}
