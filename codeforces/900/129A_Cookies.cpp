#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0, cnt = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++){
        if ((sum-a[i])%2==0)
            cnt++; 
    }
    cout << cnt << endl;
    return 0;
}
