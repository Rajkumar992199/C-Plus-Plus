#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    set<long long> s;
    for(int i = 0;i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        if(a == 1) 
            s.insert(b);
        else if(a == 2) 
            s.erase(b);
        else {
            if(s.count(b) > 0) 
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        } 
    }
    return 0;
}



