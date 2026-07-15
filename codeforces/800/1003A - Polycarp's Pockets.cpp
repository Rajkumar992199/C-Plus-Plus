#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++)
        cin>>v[i];
 
    int dup_cnt = 1, mx_cnt = 1;
    sort(v.begin(),v.end());

    for(int i = 0; i < n-1; i++){
        if(v[i] == v[i+1])
            dup_cnt++;
        else 
            dup_cnt=1;

        mx_cnt=max(mx_cnt,dup_cnt);
    }

    cout << mx_cnt << endl;
    return 0;
}
