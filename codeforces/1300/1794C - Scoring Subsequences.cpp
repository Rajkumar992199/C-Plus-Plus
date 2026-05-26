#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;         
     cin >> n;
     vector<int> v(n);     
     for(int i = 0; i < n; i++)
        cin >> v[i];

     queue <long long>q;
     for(int i = 0; i < n; i++) {
        q.push(v[i]);
        while( q.front() < q.size())
            q.pop();

        cout << q.size() << " ";
     }
     cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}