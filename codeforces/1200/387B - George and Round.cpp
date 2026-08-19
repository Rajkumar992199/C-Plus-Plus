#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
 
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    for(int i = 0; i < m; i++)
        cin >> b[i];
 
    int i = 0, j = 0, cnt = 0;
 
    while(i < n){
        while(j < m && b[j] < a[i])
            j++;
 
        if(j < m)
            j++;
        else
            cnt++;
        i++;
    }
    cout << cnt << endl;

    return 0;
}
