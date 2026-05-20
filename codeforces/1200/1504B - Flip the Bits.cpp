#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;
    int zero = 0, one = 0;
    for(char c : a) {
        if(c == '0')
            zero++;
        else
            one++;
    }

    bool flip = false;
    for(int i = n - 1; i >= 0; i--) {
        if(!flip) {
            if(a[i] != b[i]) {
                if(zero != one) {
                    cout << "NO\n";
                    return;
                }
                flip = true;
            }
        }
        else {
            if(a[i] == b[i]) {
                if(zero != one) {
                    cout << "NO\n";
                    return;
                }
                flip = false;
            }
        }
        
        if(a[i] == '0')
            zero--;
        else
            one--;
    }
    cout << "YES\n";
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