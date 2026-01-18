#include <bits/stdc++.h>
using namespace std;

vector<int> possibility;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(!i) possibility.push_back(a[i]);
        else {
            int x = possibility.size();
            for(int j = 0; j < x; j++) {
                possibility.push_back(possibility[0] - a[i]);
                possibility.push_back(possibility[0] + a[i]);
                possibility.erase(possibility.begin());
            }
        }
    }
    for(int i = 0; i < possibility.size(); i++) {
        if(possibility[i] % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}