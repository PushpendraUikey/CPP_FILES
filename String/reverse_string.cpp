#include<iostream>
#include<string>
using namespace std;

void reverse(string& s){
    int len = s.size();
    int start{0};
    while(start<=len){
        len--;
        char temp = s[start];
        s[start] = s[len];
        s[len] = temp;
        start++;
    }
}
int main(){
    cout << "Give the string to reverse: ";
    string s; cin >> s;
    reverse(s);
    cout << "Reversed string is: " << s << endl;
}