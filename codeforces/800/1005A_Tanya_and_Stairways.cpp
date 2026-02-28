#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    cin >> n;
    
    vector<int> a(n), ans;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) { 
            count++;
            if(i != 0)
                ans.push_back(a[i - 1]);
        }
    }
    ans.push_back(a[n - 1]);
    cout << count << endl;
    for(auto it: ans)
        cout << it << " ";
    return 0;
}