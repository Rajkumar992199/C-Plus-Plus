#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, sum = 0, prod = 1, temp;
    cin >> n;
    while(n) {
        temp = n % 10;
        n = n / 10;
        sum += temp;
        prod *= temp;
    }
    cout << sum << " " << prod;
    return 0;
}
