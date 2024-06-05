#include<iostream>
using namespace std;

int v(string s, int i){
    int Num[] = {1000,500,100,50,10,5,1};
    char Rom[] = "MDCLXVI";
    //{'M',"D","C","L","X","V","I"};

    int res{0};
    for(int k{0}; k<7; k++){
        if(s[i] == Rom[k]){
            res = Num[k];
        }
    }
    return res;
}

int Rom_to_int(string s){
    int size = s.length();
    int num[size];
    for(int i{0}; i<size; i++) num[i] = 0;
    int res = v(s,0);
    for(int k{1}; k<size; k++){
        int num1 = v(s,k-1);
        int num2 = v(s,k);
        if(num2 <= num1) {
            res+=num2;
        }else {
            res += (num2-(2*num1));
        }
    }
    return res;
}
int main(){
    cout << "Give the Roman string: ";
    string s; cin >> s;
    cout << "Hindi-Arabic number corresponding to the \"" << s << "\" is: " << Rom_to_int(s) << endl;

}
