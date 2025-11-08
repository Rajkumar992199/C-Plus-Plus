#include <iostream>
using namespace std;

int main() {
    // update your code here
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) 
        cout << "Equilateral";
    else if (a != b && b != c && a != c)
        cout << "Scalene";
    else 
        cout << "Isosceles";
    return 0;
}
