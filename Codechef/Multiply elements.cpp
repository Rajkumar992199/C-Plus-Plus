#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    // update your code below this line
    for(int i = 0; i < N; i++) 
        cin >> arr[i];
    cout << arr[0] * arr[2];

    return 0;
}