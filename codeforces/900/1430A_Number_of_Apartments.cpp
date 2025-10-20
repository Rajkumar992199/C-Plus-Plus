#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 7 == 0) cout << "0 0 " << n / 7 << endl;
        else if (n % 5 == 0) cout << "0 " << n / 5 << " 0\n";
        else if(n % 3 == 0) cout << n / 3 << " 0 0\n";
        else {
            bool found = false;
            // n = 3x + 5y + 7z
            // Try all possible z (7's count)
            for (int z = 0; z <= n / 7; z++) {
                // Try all possible y (5's count)
                for (int y = 0; y <= (n - 7 * z) / 5; y++) {
                    int remaining = n - (7 * z + 5 * y);

                    // Check if remaining can be formed by 3's
                    if (remaining % 3 == 0) {
                        int x = remaining / 3;
                        cout << x << " " << y << " " << z << endl;
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }

            if (!found) cout << -1 << endl;
        }
    }
	return 0;
}
