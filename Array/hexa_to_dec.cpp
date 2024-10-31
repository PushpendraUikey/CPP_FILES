#include<iostream>
using namespace std;

int hexa_to_dec(string s){
    int num[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char let[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    int ans{0}, mul{1};
    int len = s.size();
    for(int k{len-1}; k>=0; k--){
        for(int i{0}; i<16; i++){
            if(let[i]==s[k]){
                ans += (mul*num[i]);
                break;
            }
        }
        mul*=16;
    }
    return ans;
}

int main(){
    cout << "Give hexadecimal no: ";
    string s; cin >> s;
    cout << "Decimal conversion of given number is: " << hexa_to_dec(s) << endl;
}