#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum = 0, mn = INT_MAX, index;
    cin >> n >> k;
    vector<int> h(n + 1);
    h[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> h[i];
        sum += h[i];
        if (i >= k) {
            sum -= h[i - k];
            if (sum < mn) {
                mn = sum; 
                index = i - k + 1;
            }
        }
    }
    cout << index;
    return 0;
}
