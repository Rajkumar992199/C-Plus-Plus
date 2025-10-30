#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    // sum = posibility of 1s after flipping, count = count of 1's, mx = maximum posibility of 1's after flipping
    int n, num, sum = 0, count = 0, mx = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num == 0) sum++; // probability of 1's increase after flipping
        else {
            sum--; // probability of 1's decrease after flipping
            count++; // count of 1's
        }
        if(sum > mx) mx = sum; 
        if(sum < 0) sum = 0; // reset sum
    }
    cout << count + mx << endl; // existing 1's + mew 1's after flipping
    return 0;
} 