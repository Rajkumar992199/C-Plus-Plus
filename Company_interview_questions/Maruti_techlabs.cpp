// start, stepsize, and stepcount is given
// EX: input: 2 1 3 output: 8 27 64
// EX: input: 1 2 5 output: 1 27 125 343 729
// EX: input: 1 1 5 output: 1 8 27 64 125
#include <bits/stdc++.h>
using namespace std;

int task(int start, int stepsize, int stepcount) {
    if(stepcount == 0 ) return 0;
    cout << pow(start, 3) << " ";
    stepcount--;
    start += stepsize;
    return task(start, stepsize, stepcount);
}

int main() {
    int start, stepsize, stepcount;
    cin >> start >> stepsize >> stepcount;
    task(start, stepsize, stepcount);
}