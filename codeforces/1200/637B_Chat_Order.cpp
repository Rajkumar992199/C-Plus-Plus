#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<string> v(n);
    map<string, int> mp;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = n - 1; i >= 0; i--) {
        if(mp[v[i]])
            continue;
        else {
            mp[v[i]] = 1;
            cout << v[i] << endl;
        }
    }
    
    return 0;
}

