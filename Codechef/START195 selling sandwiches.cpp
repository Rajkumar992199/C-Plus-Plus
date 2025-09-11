#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int A, B, C;
    cin >> A >> B >> C;
    B += C; // adding total cost
    A -= B; // profit or loss 
    cout << A;
}
