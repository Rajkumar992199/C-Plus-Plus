#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(2 * n);
        map<long long, int> m;
        bool flag = false;
        for(int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            m[a[i]]++;
            if(m[a[i]] > 2) flag = true;
        }
        if(flag) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}
