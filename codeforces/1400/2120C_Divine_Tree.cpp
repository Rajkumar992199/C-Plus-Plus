#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n , m;
        cin >> n >> m;
        if (m < n || m > (n * (n + 1) / 2)) cout << -1 << endl;
        else {
            long long temp = m - n;
            vector<long long> ans(0);
            long long i = 1;
            while(temp > 0) { // cheking if any changes in left numbers
                long long element = 1 + min(temp, n - i);
                ans.push_back(element);
                temp -= min(m - n, n - i);
                i++;
            }
            if(ans.size() == 0) { // if no changes in left side then print direct
                cout << 1 << endl;
                for (int j = 1; j < n; j++) 
                    cout << j << " " << j + 1 << endl;
                cout << endl;
            }
            else { // else print with changes
                temp = ans.size();
                for (int j = 1; j <= n - temp + 1; j++) if(j != ans[temp - 1]) ans.push_back(j);
                cout << ans[0] << endl;
                for (int j = 1; j < n; j++) cout << ans[j - 1] << " " << ans[j] << endl;
                cout << endl;
            }
        }
    }
    return 0;
}