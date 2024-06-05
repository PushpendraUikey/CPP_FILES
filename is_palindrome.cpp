#include<iostream>
#include<string.h>
using namespace std;

bool is_palindrome(string s){
    int end = s.size();
    int start{0};
    while(start<=end){
        end--;
        if(s[start] != s[end]) return false;
        start++;
    }
    return true;
}
int main(){
    cout << "Give the string to check for palindrome: ";
    string s; cin >> s;
    if(is_palindrome(s)) cout << s << " is a palindrome." << endl;
    else cout << s << " is not a palindrome." << endl;
}

// Don't stroe unrequired things.
// Try to avoid loops, wherever possible
// Don't call function again and agian if you can do it by calling once and storing the values,
// Use assert() method to check for the given preconditions are followed in input or not.
//