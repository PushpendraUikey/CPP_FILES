#include<iostream>
using namespace std;

int main(){
    int n; cin >>n;
    int arr[n];
    for(int k{0}; k<n; k++) cin >> arr[k];
    for(int k{n-1}; k>=0; k--) cout << arr[k] << ' ';
    cout << endl;
}