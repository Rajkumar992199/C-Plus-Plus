#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin >> n >> q; 
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> a(k);
        for(int j = 0; j < k; j++) {
            cin >> a[j];
        }
        v[i] = a;
    }
    for(int x = 0; x < q; x++) {
        int i, j;
        cin >> i >> j;
        cout << v[i] [j] << endl;
    } 
    return 0;
}