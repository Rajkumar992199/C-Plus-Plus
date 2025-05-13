#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, mn = INT_MAX;
    cin >> n >> m; // storing student count & puzzle count
    vector<int> f(m); 
    for (int i = 0; i < m; i++) cin >> f[i]; // storing number of pieces in each puzzle
    sort(f.begin(), f.end()); // sorting vector
    for (int i = 0; i < (m - n + 1); i++) mn = min (mn, (f[n + i - 1] - f[i])); // finding minimum difference between max and min
    cout << mn;
    return 0;
}