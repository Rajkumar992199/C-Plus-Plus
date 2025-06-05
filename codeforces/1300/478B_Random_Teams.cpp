#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k_min = 0, k_max = 0;
    cin >> n >> m;

    // if players equally divided then we get minimum pairs
    // (n / m) in all teams, 1 will added to each possible teams from reminder 

    // first calculate without reminder teams pairs
    k_min = (m - (n % m)) * ((n / m) * ((n / m) - 1)) / 2;

    // with reminder teams pairs
    k_min += (n % m) * (n / m) *((n / m) + 1) / 2;

    // minimum requirement is 1 player in each team and 1 team has (n - m) players
    k_max = ((n - m + 1) * (n - m)) / 2;  
    cout << k_min << " " << k_max;
    return 0;
}