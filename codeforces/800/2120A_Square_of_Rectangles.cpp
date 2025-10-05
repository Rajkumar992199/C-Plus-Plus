#include <bits/stdc++.h>
using namespace std;

bool is_square(int l1, int b1, int l2, int b2, int l3, int b3) {
    long long area = l1 * b1 + l2 * b2 + l3 * b3, root = sqrt(area);
    if (root * root == area) {
        if (b1 == b2 && b2 == b3 && b1 == l1 + l2 + l3)
            return true;
        if (l1 == l2 && l2 == l3 && l1 == b1 + b2 + b3)
            return true;
        if (l1 == l2 + l3 && b1 == b2 + b3 && l1 == b1)
            return true;
        if (l2 == l3 && b1 == l1 + l2 && b1 == b2 + b3)
            return true;
        if (b2 == b3 && l1 == b1 + b2 && l1 == l2 + l3)
            return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (is_square(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
