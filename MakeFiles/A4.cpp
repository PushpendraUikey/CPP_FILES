#include <iostream>

using namespace std;
#define MOD 1000000007

long long binary_exponentiation(long long a, long long b){
    int res=1;
    if(b==0){
     
        return 1;
    }
    else if(b==1){
     
        return a%MOD;
    }
    else if(b%2==0){
      long long temp = binary_exponentiation(a,b/2);
     
        return (temp*temp)%MOD;
    }
    else {
         long long temp1 = binary_exponentiation(a,b/2);
         long long temp2 = binary_exponentiation(a, b-b/2);
         return (temp1*temp2)%MOD;
    }
 
}

int main(){
    long long n,k;
    cin>>n>>k;
    cout<<binary_exponentiation(n,k)<<"\n";
    return 0;
}