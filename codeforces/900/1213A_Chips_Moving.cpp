#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, cnt = 0;
    cin >> a;
    int k[a];
    for (int i = 0; i < a; i++) {
        cin >> k[i];
        if (k[i] % 2 == 0)
            cnt++; // counting even numbers
    }
    // min count of even or odd numbers as moving in same (odd to odd & even to even) costs 0
    cout << min(cnt, a - cnt) << endl; 
    return 0;
}