#include <iostream>
using namespace std;

int main() {
    int t, n, k, cnt=0; 
    string s; 
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> k >> s; 
        for (int i = 0; i < n; i++) cnt += s[i] - '0'; 
        cout << (cnt <= k || n < 2 * k ? "Alice" : "Bob") << endl;
    }
}