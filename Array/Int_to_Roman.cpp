#include<iostream>
using namespace std;

string Roman(int n){
    int numeric []= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    string rom[] = {"M", "CM", "D", "CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result = "";
    for(int i{0}; i<13; i++){
        while(n>=numeric[i]){
            n-=numeric[i];
            result += rom[i];
        }
    }
    return result;
}
int main(){
    cout<< "Give the number you want Roman conversion of: ";
    int n; cin >> n;
    string rom = Roman(n);
    cout<< "Roman of " << n << " is: \"" << rom <<"\""<< endl;
}

// Key takeaway: It is easy way to store some predefined values when we are dealing with conversions, and strings.