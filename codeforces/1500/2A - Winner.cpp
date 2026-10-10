
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> total, current;
    vector<string> name(n);
    vector<int> score(n);

    int mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> score[i];
        total[name[i]] += score[i];
    }

    for (auto &p : total) 
        mx = max(mx, p.second);

    for (int i = 0; i < n; i++) {
        current[name[i]] += score[i];

        if (total[name[i]] == mx && current[name[i]] >= mx) {
            cout << name[i] << '\n';
            return 0;
        }
    }

    return 0;
}
