#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    int j, k;
    cin >> n >> j >> k;
    // index of permutation
    int idx = 1;
    string num1, num2; // jth & kth permutation
    if(j == 1) num1 = n;
    if(k == 1) num2 = n;
    if (j != 1 || k != 1) {
        while(next_permutation(n.begin(), n.end())){
            idx++;
            if(j == idx) num1 = n;
            if(k == idx) num2 = n;
        }
    }
    int x = 0, y = 0;
    for(int i = 0; i < n.size(); i++) { 
        // digit matched at same index 
        if(num1[i] == num2[i]) x++;
        else y++; // index mismatch but present in number
    }
    cout << x << 'A' << y << 'B' << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
