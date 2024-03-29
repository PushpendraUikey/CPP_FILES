#include<iostream>
using namespace std;

int array_divide(int[], int, int, int);
int main(){
    int n; cin >> n; int S[n];
    for(int i{0}; i<n; i++){
        cin >> S[i];
    }
    int d, m; cin >> d >> m;
    cout << array_divide(S,n,d,m) << endl;

}
int array_divide(int S[], int n, int d , int m){
    int count{0};
    int num{0};
    for(int i{0}; i<=n-m; i++){
        num=0;
        for(int j{0}; j<m; j++){
            num += S[i+j];
        }
        if(num == d) count++;
    }
    return count;
}