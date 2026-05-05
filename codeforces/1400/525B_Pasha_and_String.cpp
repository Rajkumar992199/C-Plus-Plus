#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    long long m;
    cin >> s >> m;

    int n = s.size(), a;
    vector<int> freq(n/2);

    while(m--) {
        cin >> a;
        freq[a - 1]++;
    }

    for(int i = 1; i < n/2; i++) 
        freq[i] += freq[i - 1] % 2;

    for(int i = 0; i < n/2; i++) 
        if(freq[i] % 2) 
            swap(s[i], s[n - i - 1]);

    cout << s;
    return 0;
}