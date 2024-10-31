#include<iostream>
using namespace std;

char c(int k){
    int num[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char let[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char ret;
    for(int i{0}; i<16; i++){
        if(k==num[i]) ret = let[i];
    }
    return ret;
}

string hexadecimal(int k){
    if(k==0) return 0;
    string s="";
    while(k!=0){
        int v = k%16;
        s+=c(v);
        k/=16;
    }
    return s;
}

void printHexa(string s){
    int size = s.size();
    for(int k{size-1}; k>=0; k--){
        cout << s[k] ;
    }
    cout << endl;
}

int main(){
    cout << "Give the number: " ;
    int n; cin >> n;
    string hexa = hexadecimal(n);
    cout << "Hexadecimal of the given number is: ";
    printHexa(hexa);
}

// If you want to remove printHexa then do the following:
/*
string hexadecimal(int k){
    if(k==0) return 0;
    string s="";
    while(k!=0){
        int v = k%16;
        s = c(v) + s;                       // Preappend the character.
        k/=16;
    }
    return s;
}
*/