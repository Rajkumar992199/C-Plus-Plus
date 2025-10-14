#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        int num = i;
        int primeFactors = 0;
        for (int j = 2; j <= num; j++) {
            if (num % j == 0) {
                primeFactors++;
                while (num % j == 0)
                    num /= j;
            }
        }
        if (primeFactors == 2)
            count++;
    }
    cout << count;
    return 0;
}
