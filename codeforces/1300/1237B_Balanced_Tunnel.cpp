#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int n, x, ans = 0;
    cin >> n;
    vector<int> a(n), visited(n + 1, 0);

    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int idx = 0;
    for(int j = 0; j < n; j++) {
        cin >> x;
        while(visited[a[idx]]) // already fined
            idx++;
        visited[x] = 1; // exited
        if(x != a[idx]) // overtaken car(s)
            ans++;
        else idx++; // no overtaking
    }
    cout << ans;
}
