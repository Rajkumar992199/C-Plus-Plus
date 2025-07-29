#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; i++) 
        cin >> v[i];
    sort(v.begin(), v.end());
    long long count = 0;
    for(long long i = 0; i < n; i++) {
        if(v[i] > v[0] && v[i] < v[n - 1]) 
            count++;
    }
    cout << count << endl;
    return 0;
}