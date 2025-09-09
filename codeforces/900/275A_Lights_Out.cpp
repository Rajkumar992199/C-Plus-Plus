#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(9), ans(9, 1);
    for(int i = 0; i < 9; i++) {
        cin >> v[i];
        if(v[i] % 2 == 1) {
            ans[i] = 1 - ans[i];
            if(i - 3 >= 0) ans[i - 3] = 1 - ans[i - 3];
            if(i + 3 < 9) ans[i + 3] = 1 - ans[i + 3];
            if(i + 1 < 9 && (i + 1) % 3 != 0) ans[i + 1] = 1 - ans[i + 1];
            if(i - 1 >= 0 && i % 3 != 0) ans[i - 1] = 1 - ans[i - 1];
        }
    }
    for(int i = 1; i <= 9; i++) {
        cout << ans[i - 1];
        if(i % 3 == 0) cout << endl;
    }
    return 0;
}