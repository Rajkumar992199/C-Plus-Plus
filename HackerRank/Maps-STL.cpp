#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string, int> mp;
    int type, marks, n;
    string name;
    cin >> n;
    while(n--) {
        cin >> type >> name;
        if(type == 1) {
            cin >> marks;
            mp[name] += marks;
        }
        else if(type == 2) 
            mp[name] = 0;
        else 
            cout << mp[name] << endl;
    }
    return 0;
}



