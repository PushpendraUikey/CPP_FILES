#include<bits/stdc++.h>
using namespace std;

// A silly hacker rank question

int findIndex(int arr[], int n, int k){
    for(int i{0}; i< n; i++){
        if(arr[i] == k) return i+1;
    }
    return -1;
}
int main(){
    int n; cin >> n;
    int arr[n], ans[n] ;
    for(int i{0}; i< n; i++) cin >> arr[i]; 

    int answer{-1};
    for(int i{0}; i<n; i++){
        answer = findIndex(arr, n, i+1);
        answer = findIndex(arr, n, answer);
        ans[i] = answer;
    }
    for(int i{0}; i<n; i++){
        cout << ans[i] << endl;
    }
}