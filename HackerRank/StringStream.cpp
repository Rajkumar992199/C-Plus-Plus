#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

void parseInts(string str) {
	// Complete this function
    int num = 0, sign = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ',') {
            if(sign) num = 0 - num; 
            cout << num << endl;
            num = 0; // num will reset
            sign = 0;
        }
        else {
            if(str[i] == '-') {
                sign = 1;
                continue;
            }
            num = num * 10 + (str[i] - '0'); // converting string to int
            if(i == str.size() - 1) {
                if(sign) num = 0 - num; 
                cout << num << endl;
            }
        }
    }
}

int main() {
    string str;
    cin >> str;
    parseInts(str);
        
    return 0;
}
