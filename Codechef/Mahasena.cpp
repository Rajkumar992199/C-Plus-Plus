#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N, cnt = 0;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) cnt++;
    }
    if(cnt * 2 > N) cout << "READY FOR BATTLE";
    else cout << "NOT READY";
}
