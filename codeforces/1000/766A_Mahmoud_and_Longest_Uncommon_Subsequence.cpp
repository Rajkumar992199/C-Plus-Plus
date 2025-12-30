#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    if (a == b)
    	cout << -1;
    else
    	cout << max(a.size(), b.size());
}
