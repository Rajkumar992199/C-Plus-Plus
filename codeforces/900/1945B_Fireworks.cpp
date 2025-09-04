#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, m;
        cin >> a >> b >> m;
        long long ans = m / a + m / b + 2;
        cout << ans << endl;
    }
    return 0;
}
