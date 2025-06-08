#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        string s1, s2;
        cin >> n >> m >> s1 >> s2;
        for (int i = 0; i < 5; i++) s1 += s1;
        int x = s1.find(s2), ans = x + m;
        if (x == -1) cout << -1 << endl;
        else if (ans <= n) cout << 0 << endl;
        else if (ans <= 2 * n) cout << 1 << endl;
        else if (ans <= 4 * n) cout << 2 << endl;
        else if (ans <= 8 * n) cout << 3 << endl;
        else if (ans <= 16 * n) cout << 4 << endl;
        else if (ans <= 32 * n) cout << 5 << endl;
    }
}