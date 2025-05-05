#include <bits/stdc++.h>
using namespace std;

void test() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 1;
    int r = n;
    vector<int> a(n);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            a[i + 1] = l;
            l++;
        }
        if (s[i] == '>') {
            a[i + 1] = r;
            r--;
        }
    }
    a[0] = l;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) test();
    return 0;
}