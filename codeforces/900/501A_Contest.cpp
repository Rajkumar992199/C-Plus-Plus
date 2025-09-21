#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s1 = max(3 * a / 10, a - a / 250 * c);
    int s2 = max(3 * b / 10, b - b / 250 * d);
    if (s1 > s2) cout << "Misha\n";
    else if (s1 < s2) cout << "Vasya\n"; 
    else cout << "Tie\n";
    return 0;
}