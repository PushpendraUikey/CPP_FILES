#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int reverse(int n){
    int rev{0};
    while(n!=0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}
int beautiful_day(int a, int b, int k){
    int ans{0}; int num{0};
    for(int i=a; i<=b; i++){
        num = abs(i-reverse(i));
        if(num%k==0) ans++;
    }
    return ans;
}
int main(){
    int a, b ,k ; cin >> a >> b >> k;
    cout << beautiful_day(a,b,k) << endl;
}