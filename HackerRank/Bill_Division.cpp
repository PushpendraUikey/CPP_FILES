#include<iostream>
#include<cmath>
using namespace std;

int bill_division(int bill[], int n, int k, int b){
    int sum{0};
    for(int j{0}; j<n; j++){
        if(j==k) continue;
        sum+=bill[j];
    }
    sum/=2;
    int temp = b - sum;
    return temp;
}
int main(){
    int n,k; cin >> n >> k;
    int bill[n]; 
    for(int i{0}; i<n; i++){
        cin >> bill[i];
    }
    int b; cin >> b;
    int result = bill_division(bill,n,k,b);
    if(result==0) cout << "Bon Appetit" << endl;
    else cout << result << endl;
}