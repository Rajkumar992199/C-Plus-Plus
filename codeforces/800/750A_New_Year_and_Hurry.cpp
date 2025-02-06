#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,minutes,problem=0;
    cin >> n >> k;
    minutes = 240-k;
    if(minutes<5) problem--;
    for(int i=1;i<=n;i++){
        minutes -= 5*i;
        problem++;
        if(problem == n || minutes<5*(i+1)) break;
    }
    cout << problem;
}