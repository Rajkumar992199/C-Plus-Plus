#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) {
        int N, X, count; // N = number of friends, X = cost per subscription 
        cin >> N >> X;
        count = N / 6 + (N % 6 != 0); // number of groups
        cout << count * X << endl; //minimum cost
    }
    return 0;
}
