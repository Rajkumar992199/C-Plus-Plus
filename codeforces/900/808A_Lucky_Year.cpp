#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long temp = n, digit = 0;
    while(temp / 10) {
        temp /= 10;
        digit++;
    }
    temp = 1;
    for(int i = 0; i < digit; i++) 
        temp *= 10;
    cout << temp - (n % temp);
}
