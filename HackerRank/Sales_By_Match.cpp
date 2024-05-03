#include<iostream>
#include<cmath>
using namespace std;

int pairs_found(int [], int);
int check_num(int [],int,int);
int main(){
    int n; cin >> n;
    int Shocks[n];
    for(int i{0}; i<n; i++){
        cin >> Shocks[i] ;
    }
    cout << pairs_found(Shocks,n) << endl;

}
int pairs_found(int A[],int n){
    int tempA[100]={0};
    for(int i{0}; i<100; i++){
        for(int j{0}; j<n; j++){
            if((i+1)==A[j]) tempA[i]++;
        }
    }
    int sum{0};
    for(int i{0}; i<100; i++){
        sum += tempA[i]/2;
    }
    return sum;
}
int check_num(int A[],int n,int m){
    int num{0};
    for(int i{0};i<n; i++){
        if(m==A[i]) num++;
    }
    return num;
}