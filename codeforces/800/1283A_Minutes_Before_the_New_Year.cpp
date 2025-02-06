#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,h,m;
    cin >> t;
    for(int i=0;i<t;i++) {
        int time = 0;
        cin >> h >> m;
        time += 60*(23-h) + (60-m);
        cout << time << endl;
    }
}