#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0, ans = 0;
    for(auto it : s) {
        if(it == '(')
            cnt++;
        else if(cnt){
            ans += 2;
            cnt--;
        }
    }
    cout << ans << endl;

    return 0;
}