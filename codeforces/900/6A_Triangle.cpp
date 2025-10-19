#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(4); // positions
    
    for(int i = 0; i < 4; i++) 
        cin >> a[i]; // size of 4 sticks
    sort(a.begin(), a.end());

    // triangle is possible
    if(a[0] + a[1] > a[2] || a[1] + a[2] > a[3]) 
        cout << "TRIANGLE";
    // triagle is not possible but segment is possible
    else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3]) 
        cout << "SEGMENT";
    else 
        cout << "IMPOSSIBLE";
    return 0;
}