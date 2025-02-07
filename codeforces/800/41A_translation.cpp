#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,str1;
    cin >> str >> str1;
    if(str.size()==str1.size()){
    int x=0, a=str1.size();
    for (int i=0;i<str.size();i++){
        if (str[i]==str1[a-1]) x++;
        a--;
    }
    if (x==str.size()) cout<<"YES";
    else cout << "NO";
    return 0;
    }
    else cout << "NO";
}