#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N, D;
    cin >> N >> D;
    long long P[N], player, team = 0, temp = N;
    for (int i = 0; i < N; i++) cin >> P[i];
    sort(P, P + N);
    for (int i = 0; i < N; i++) {
        player = D / P[N - i - 1];
        if (D % P[N - i - 1] >= 0) player++;
        temp -= player;
        if(temp < 0) break;
        team++;
    }
    cout << team << endl;
    return 0;
}