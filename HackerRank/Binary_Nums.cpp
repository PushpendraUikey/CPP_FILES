#include<iostream>
#include<cmath>

// Algorithm to find maximum consecutive one's in the array.

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
    int r{0}, max{0},lm{0};
    while(r<arrsize){
        while(arr[r]==1){
            lm++;
            r++;
        }
        max = lm >= max ? lm : max;
        lm = 0; 
        r++;
    }
    cout << max << endl;
}