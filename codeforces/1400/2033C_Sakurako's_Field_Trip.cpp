#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        int a[n + 1];
		for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = ((n + 1) / 2) - 1; i >= 1; i--) {
            if (a[i] == a[i + 1] || a[n - i + 1] == a[n - i]) { // checking if adjacent elements are same 
                swap(a[i], a[n - i + 1]); // if adjacent elements are same then swap ith element with (n - i + 1)th element
            }
        }
        for (int i = 1; i < n; i++) ans += (a[i] == a[i + 1]); // after swapping if any adjacent elements are same then add in count
        cout << ans << endl;
    }
}