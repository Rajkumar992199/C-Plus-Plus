#include <bits/stdc++.h>
using namespace std;

int solve(int l, int r, int h, vector<int> a) {
    if (l > r) 
        return 0;

    int vert = r - l + 1;
    int mn = *min_element(a.begin() + l, a.begin() + r + 1);
    int hori = mn - h;

    int i = l;
    while (i <= r) {
        if (a[i] == mn) {
            i++;
            continue;
        }

        int j = i;
        while (j <= r && a[j] > mn) 
            j++;

        hori += solve(i, j - 1, mn, a);
        i = j;
    }

    return min(vert, hori);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    cout << solve(0, n - 1, 0, a) << endl;

    return 0;
}