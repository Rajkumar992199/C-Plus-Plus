#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long count = 0;
        while (n != 0) {
            count++;
            n = n / 2;
        }
        cout << (1 << (count - 1)) - 1 << endl;
    }
    return 0;
}