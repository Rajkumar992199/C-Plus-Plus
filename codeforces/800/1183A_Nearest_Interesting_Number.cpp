#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }
    return result;
}

int main() {
    int a;
    cin >> a;
    while (sum(a) % 4 != 0) 
        a++;
    cout << a << endl;
}