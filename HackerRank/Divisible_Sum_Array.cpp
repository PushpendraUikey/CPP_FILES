#include<iostream>
#include<cmath>

using namespace std; 

int Divisible_Sum_Array(int[], int, int);
int main(){
    int n, k; cin >> n >> k;
    int Arr[n];
    for(int i{0}; i<n; i++){
        cin >> Arr[i];
    }
    cout << Divisible_Sum_Array(Arr,n,k) << endl;
}
int Divisible_Sum_Array(int A[], int n, int k){
    int count{0};
    for(int i{0}; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(A[i]+A[j]%k == 0) count++;
        }
    }
    return count;
}