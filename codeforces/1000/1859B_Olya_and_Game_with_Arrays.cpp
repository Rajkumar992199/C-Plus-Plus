#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long mn1 = INT_MAX, mn2 = INT_MAX, ans = 0; // mn1 is minimum first element and mn2 is minimum second element after sorting
        cin >> n;
        long long b[n];
        while (n--) {
            int m;
            cin >> m;
            long long a[m];
            for (int i = 0; i < m; i++) cin >> a[i];
            sort (a, a + m); // sorting array
            for (int i = 0; i < m; i++) {
                if (i == 0) mn1 = min (mn1, a[i]); // finding minimum element
                if (i == 1) {
                    ans += a[i];
                    mn2 = min (mn2, a[i]); // finding second minimum element at 2nd position after sorting
                }
            }
        }
        ans = ans - mn2 + mn1; // ans after moving 1 element from each array.
        cout << ans << endl;
    }
    return 0;
}