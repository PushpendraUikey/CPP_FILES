#include<iostream>
using namespace std;

bool check_multiple(int[], int, int);
bool check_factor(int[],int,int);
int count_btw_two_sets(int[],int,int[],int);

int main(){
    int n, m; cin >> n >> m;
    int A[n],B[m];
    for(int i{0}; i<n; i++){
        cin >> A[i];
    }
     for(int i{0}; i<m; i++){
        cin >> B[i];
    }
    cout << count_btw_two_sets(A,n,B,m) << endl;
}

int count_btw_two_sets(int A[], int n, int B[], int m){
    int count{0};
    for(int i{A[n-1]}; i <= B[0]; i++){
        if(check_multiple(A,n,i) && check_factor(B,m,i)){
            count++;
        }
    }
    return count;
}
bool check_multiple(int A[], int n, int num){
    for(int i{0}; i<n; i++){
        if(num % A[i] != 0) return false;
    }
    return true;
}
bool check_factor(int B[], int m, int num){
    for(int i{0}; i<m; i++){
        if( B[i] % num != 0) return false;
    }
    return true;
}