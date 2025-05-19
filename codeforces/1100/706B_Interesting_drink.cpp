#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n); // prices of beer
    for (int i = 0; i < n; ++i) cin >> x[i];
    sort(x.begin(), x.end());
    int q; // number of days
    cin >> q; 
    while (q--) {
        int m; // number of coins we have on each day
        cin >> m;
        // upper_bound returns an iterator to the first element greater than m
        // So the number of elements ≤ m is the index of that element
        int count = upper_bound(x.begin(), x.end(), m) - x.begin();
        // x.begin() subtracted because without that upper_bound is just a iterator
        cout << count << endl;
    }
    return 0;
}
