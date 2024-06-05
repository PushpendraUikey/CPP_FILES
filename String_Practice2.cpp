#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

// Making strcpy() function by own.
/*void str_cpy(char *s1, char* s2);
int main(){
    char string1[80], string2[80];
    cout << "Give two strings to be concatenated: one by one" << endl;
    cin.getline(string1,80);
    cin.getline(string2,80);
    int len1 = strlen(string1), len2=strlen(string2);
    if( len1 < len2){
        cout << "Error: length of the string we want to copy into first string must be lesser than the first string!" << endl;
    }
    else {
        str_cpy(string1, string2);
        cout << string1 << endl;
        cout << string2 << endl;
    }

}
void str_cpy(char* s1, char* s2){
    char* p;
    p = s2;
    int i;
    for( i=0; i< strlen(s2); i++){
        s1[i] = *p; 
        p++;
    }
    s1[i] = '\0';
}
*/

// Making strncat() function by own.
/*void str_ncat(char *s1, char* s2, int n);
int main(){
    char string1[20], string2[20]; int n;
    cout << "Give two strings to be concatenated: one by one" << endl;
    cin.getline(string1,20);
    cin.getline(string2,20);
    cin >> n;
    int len1 = strlen(string1), len2=strlen(string2);
    if ( n <= len2 ) {
        if( (len1 + n) > 20 ){
            n = 20 - len1;
            str_ncat(string1,string2,n);
        }
        else {
            str_ncat(string1, string2, n);
        }
    }
    else{
        n = len2;
        if( (len1 + n) > 20 ){
            n = 20 - len1;
            str_ncat(string1,string2,n);
        }
        else {
            str_ncat(string1, string2, n);
        }
    }
    cout << string1 << endl;
    cout << string2 << endl;
}
void str_ncat(char* s1, char* s2, int n){
    char* p;
    p = s2;
    int i, till = strlen(s1)+n;
    for( i=strlen(s1); i<till; i++){
        s1[i] = *p; 
        p++;
    }
    s1[i] = '\0';
}*/
/*
void plural(char* s1);
int main() {
    char Word[25];
    bool want = true;
    while(want){
    cout << "Give a word with words less than 22 whose plural you want: ";
    cin.getline(Word,25);
    plural(Word);
    cout << Word << endl;
    if(Word[0] == 'n') want = false;
    }
}
void plural(char* s1){
    int length_string = strlen(s1);
    char last_letter = s1[length_string - 1];
    if(last_letter == 'i' ){
        s1[length_string] = 's';
        s1[length_string+1] = '\0';
    }else if(last_letter == 'y'){
        s1[length_string-1] = 'i';
        s1[length_string] = 'e';
        s1[length_string+1] = 's';
        s1[length_string+2] = '\0';
    }else if(last_letter == 's' || last_letter == 'x' || last_letter == 'z' || last_letter == 'h'){
        s1[length_string] = 'e';
        s1[length_string+1] = 's';
        s1[length_string+2] = '\0';
    }
    else if(last_letter == 'f'){
        s1[length_string-1] = 'v';
        s1[length_string] = 'e';
        s1[length_string+1] ='s';
        s1[length_string+2] = '\0';
    }
    else if(last_letter == 'e' && s1[length_string-2] == 'f'){
        s1[length_string-2] = 'v';
        s1[length_string-1] = 'e';
        s1[length_string] ='s';
        s1[length_string+1] = '\0';
    }else{
        s1[length_string] = 's';
        s1[length_string+1] = '\0';
    }
}
*/
/*
void Reverse_String(char* s);
int main(){
    char S[40];
    cin.getline(S,40);
    Reverse_String(S);
    cout << S << endl;
}
void Reverse_String(char* s){
    int str_lgth = strlen(s);
    for(int k{0}; k < str_lgth/2; k++){
        char temp = s[k];
        s[k] = s[str_lgth - k - 1];
        s[str_lgth - k - 1] = temp;
    }
}
*/
// strchr() fucntion by self
// finding the number of occurence of a particular char in the string
int main(){
    char ch;
    int num{0};
    while(cin.get(ch)){
        if (ch == 'e') num++;
        if(ch == '*') break;
    }
    cout << "Number of occurence of 'e': " << num << endl;
}