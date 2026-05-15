#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int sum = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i < n - 1; i++){
            if(v[i] == v[i+1]){
                sum++;
                i++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}