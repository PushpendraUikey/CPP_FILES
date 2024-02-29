#include<iostream>
#include<cmath>

using namespace std; 
int main(){       // Algorithm to find the binary representation for any decimal number.
    int N; cin >> N;
    int arrsize = log2(N) + 1;
    int arr[arrsize]; int j{0};
    while(N!=0){
        arr[j] = N%2;
        N=N/2;
        j++;
    }
    for(int i{arrsize-1}; i >=0; i-- ){
        cout << arr[i];
    }
    cout << endl;
}