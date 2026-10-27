#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    long long groupSize = 5;

    while (n > groupSize) {
        n -= groupSize;
        groupSize *= 2;
    }

    int index = (n-1) / (groupSize/5);

    cout << names[index] << '\n';

    return 0;
}