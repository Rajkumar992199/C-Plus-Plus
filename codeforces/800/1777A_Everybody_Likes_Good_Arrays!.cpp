#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int count=0;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]%2==0 && arr[i+1]%2==0) count++;
            else if(arr[i]%2!=0 && arr[i+1]%2!=0) count++;
        }
        cout << count << endl;
    }
}