#include<iostream>

using namespace std;
const int max_size{1000};
void extraLongFactorial(int);
void multiply(int[],int&,int);

// This is the simple algorithm to perform large factorials and store them using simple arrays

int main(){
    int n; cin >> n;
    extraLongFactorial(n);
}

void extraLongFactorial(int n){
    int fact[max_size]={0};         //Initializing all the element of the array to be zero
    fact[0]=1; int result_size{1};
    for(int i{2}; i <= n; i++){
        multiply(fact,result_size,i);
    }
    for(int j{result_size-1}; j>=0; j--){          // Remember the first digit of the number is stored in the last index
        cout << fact[j] ;
    }
    cout << endl;
} 
void multiply(int fact[],int& result_size,int multiplier){
    int carry{0};
    for(int j{0}; j<result_size; j++){
        int product = fact[j]*multiplier + carry;                   // simple algorithm learnt in school to multiply and carry forward;
        fact[j] = product%10;                                        // classical example of back to basic 
        carry = product/10;
    }
    while(carry){
        fact[result_size] = carry%10;       // if somethin remain in last carry 
        carry /= 10;
        result_size ++;
    }
}