#include<iostream>
#include<cmath>
using namespace std;

void angry_prof(int A[], int n, int k){
    int temp{0};
    for(int j{0}; j<n; j++){
        if(A[j] <= 0 ) temp++;
    }
    if(temp >= k) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
    int t; cin >> t;
    for(int i{0}; i<t; i++){
        int n, k; cin >> n >> k;
        int arr[n]; 
        for(int j{0}; j<n; j++)
        cin >> arr[j];
    angry_prof(arr,n,k);    
    }
}