#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    long long n, sum = 0, mult = 1;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        mult *= v[i];
    }
    cout << sum << " " << mult;
    return 0;
}
