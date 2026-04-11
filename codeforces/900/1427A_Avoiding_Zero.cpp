#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, sum = 0, zero = 0;
    cin >> n;

    vector<int> neg, pos;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if(x > 0) 
            pos.push_back(x);
        else if(x == 0)
            zero++;
        else 
            neg.push_back(x);
    }

    if(sum > 0) {
        cout << "YES\n";
        for(auto it: pos) 
            cout << it << " ";
        for(auto it : neg) 
            cout << it << " ";
        while(zero--)
            cout << 0 << " ";
    }
    else if(sum < 0) {
        cout << "YES\n";
        for(auto it: neg) 
            cout << it << " ";
        for(auto it : pos) 
            cout << it << " ";
        while(zero--)
            cout << 0 << " ";
    }
    else
        cout << "NO";
    cout << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}