#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 1, sum = 0;
        cin >> n;
        vector<int> g(n * n), ans(2 * n);
        for(int i = 0; i < n * n; i++) cin >> g[i];
        for(int i = 0; i < n * n; i += n) {
            ans[cnt] = g[i];
            sum += ans[cnt];
            cnt++;
        }
        for(int i = n * (n - 1) + 1; i < n * n; i++) {
            ans[cnt] = g[i];
            sum += ans[cnt];
            cnt++;
        }
        ans[0] = n * (2 * n + 1) - sum;
        for(int i = 0; i < 2 * n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}