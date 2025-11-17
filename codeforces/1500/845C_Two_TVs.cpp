#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    // number of TV shows
    int n;
    cin >> n;

    // v[i].first = starting time of show 
    // v[i].second = ending time of show
    vector<pair<long long, long long>> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end()); // sorting as per staring time

    // time when TV1 & TV2 will be free
    long long tv1 = v[0].second, tv2 = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(v[i].first > tv1) tv1 = v[i].second; //TV1 available
        else if(v[i].first > tv2) tv2 = v[i].second; //TV2 available
        else {
            cout << "NO\n"; // required 3rd TV
            return 0;
        }
    }
    cout << "YES\n"; // 2 TVs are enough
    return 0;
}