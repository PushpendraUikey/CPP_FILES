#include<iostream>
#include<cstring>
#include<ctype.h>
#include<string.h>
#include<fstream>
#include<sstream>
#include<cctype>    // for isspace() function 
using namespace std;
/*
int main(){
    int n;
    while(cin >> n){        // if passed integer then succefull to read it. otherwise any other char, it is unsuccessful to read it.
        cout << "n: " << n << endl;
    }
}*/
/*
int main(){
    char c;
    while(cin.get(c)){
        if(c>='a' && c <= 'z'){
            c += 'A'-'a';   //Capitalize the c
            cout.put(c);
            if(c=='\n') break;
        }
    }
}*/
/*
const int LEN=32;                   // Maximum word length
const int SIZE=10;                  // Array Size
typedef char Name[LEN];             // Defining name to be a C-string type.
int main(){
    Name king[SIZE];                // Defines king to be array of 10 names;
    int n{0};
    while(cin.getline(king[n++],LEN) && n < SIZE);
    --n;                    // made it equal to number of names read
    for(int k{0}; k<n; k++){
        cout << "\t" << k+1 << "\t" << king[k] << endl;
    }
}*/
// string s1;      // s1 contains 0 character
// string s2 = "New York";     //s2 contains 8 character;
// string s3(60,'*');      // s3 contains 60 asterisks
// string s4 = s3;         // s4 contains 60 asterisks
// string s5(s2,4,2);      // s5 is the two character string "Yo"

// int main(){
//     cout << s1 <<"\n"<<s2 << "\n" << s3 <<"\n" << s4 << "\n" << s5 << endl;
//     getline(cin,s1);
//     cout << s1 << endl;
//     string s = "ACSFKLJEDFA";
//     const char* cs = s.c_str();             // Conversion of C++ string to C-string;
//     cout << cs << endl;
//     cout << "Length of string 's' is: " << s.length() << endl;          // C++ strings have a well defined length() function which tells the length of the string.
//         // if C++ strings compared using relational operator, then it does lexicographic comparing and put the result.
//         // using "+" operator, you can always concatenate or append the strings.
//     string s6 = s.substr(2,4); // substring function used like 'substr(INDEX,LENGTH)';
//     string s7 = s.erase(4,2); // erase the two characters starting index 4 i.e. index 4th and 5th
//     string s8 = s.replace(4,2,"XYZ"); // Replace the the two characters starting 4th to 'XYZ'.

//     cout << s6 << "\n" << s7 << "\n" << s8 << endl;

//     string s9 = "MISSISSIPPI is great river";      // find() function is used to find out the string, 
//     cout << s9.find("SI") << endl;      // prints 3, first index found with the required string
//     cout << s9.find("SO") << endl;      // prints length of the string(As failed to find out the substring)

// }

// bool is_vowel(char c){
//     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
//         return true;
//     }else{
//         return false;
//     }
// }

// int main(){
//     string word;
//     int k;
//     while(cin >> word){
//         k = word.find("t") + 1;
//         if( k<word.length() && is_vowel(word[k])){
//             word.replace(k,0,"eg");
//         }
//         cout << word << ' ' ;
//     }
//     cout << endl;
// }

// int main(){
//     ifstream infile("input.txt");
//     ofstream outfile(("output.txt"));
//     string word;
//     char c;
//     while(infile >> word){
//         if(word[0]>='a' && word[0]<='z') word[0]+= 'A'+'a';
//         outfile << word;
//         infile.get(c);
//         outfile.put(c);
//     }
// }

// bool more(ifstream& fin, int& n){
//     cout <<"value of n in 'more': "<< n << endl;
//     if(fin >> n){
//         return true;
//     }
//     else return false;
// }
// bool copy(ofstream& fout, ifstream& fin, int& n){
//     cout <<"value of n in 'copy': "<< n << endl;
//     fout << " " << n;
//     return more(fin,n);
// }
// int main(){
//     ifstream fin1("north.dat");
//     ifstream fin2("south.dat");
//     ofstream fout("combined.dat");
//     int n1, n2;
//     bool more1 = more(fin1, n1);
//     bool more2 = more(fin2, n2);
//     while(more1 && more2){
//         if(n1>n2){
//             more1 = copy(fout, fin1, n1);
//         } else more2 = copy(fout,fin2, n2);
//     }
//     while(more1)
//         more1 = copy(fout, fin1,n1);
//     while(more2)
//         more2 = copy(fout, fin2,n2);
//     fout << endl;
// }

// void print(ostringstream&);
// int main(){
//     string s = "ABCDEFG";
//     int n{33};
//     float x = 2.734;
//     ostringstream oss;
//     print(oss);
//     oss << s ;
//     print(oss);
//     oss << " " << n;
//     print(oss);
//     oss << " " << x;
//     print(oss);
// }
// void print(ostringstream& oss){
//     cout << "oss.str() \t" << oss.str() << endl;
// }

// void print(string&, int , float, istringstream&);
// int main(){
//     string s;
//     int n{0};
//     float x{0.0};

//     istringstream iss("ABCDEFGHI 34 89.438");
//     print(s, n, x, iss);
//     iss >> s;           // One thing we must remember here is that, to obtain values, from iss, pass the variable acc to data type
//     print(s,n,x,iss);
//     iss >> n;
//     print(s,n,x,iss);
//     iss >> x;
//     print(s,n,x,iss);
// }
// void print(string& s,int n, float x, istringstream& iss){
//     cout << "s = " << s << "\tn = " << n << "\tx = " << x << "\tiss = " << iss.str() << endl;
// }

// int main(){
//     char cs1[] = "ABCDEFGHIJ";
// char cs2[] = "ABCDEFGH";
// cout << cs2 << endl;
// cout << strlen(cs2) << endl;
// cs2[4] = 'X';
// if (strcmp(cs1, cs2) < 0) cout << cs1 << " < " << cs2 << endl;
// else cout << cs1 << " >= " << cs2 << endl;
// char buffer[80];
// strcpy(buffer, cs1);        // copies cs1 to buffer
// strcat(buffer, cs2);        // concatenate cs2 to buffer
// char* cs3 = strchr(buffer, 'G');    // returns the string after 'G'
// cout << cs3 << endl;
// }

// int main(){
//     string s = "ABCDEFGHIJKLMNOP";
// cout << s << endl;
// cout << s.length() << endl;
// s[8] = '!';
// cout << s << endl;
// s.replace(8, 5, "xyz");
// cout <<  s << "\n";
// s.erase(6, 4);
// cout << s << endl;
// cout << s.find("!")<< endl;
// cout << s.find("?")<< endl;
// cout << s.substr(6, 3) << endl;
// s += "abcde";
// cout << s << endl;
// string part(s, 4, 8);
// cout << part << endl;
// string stars(8, '*');
// cout << stars << endl;
// }

// int main(){
//     string s; 
//     int n; 
//     float x;
//     cin >> s >> n >> x >> s;
// }

void count_letter(char letter[][26],char);
int main(){
    char letter[2][26] = {{0}};
    int i;
    int word{0};
    int lines{0};
    for(char c = 'A',i = 0; c <= 'Z' && i < 26; c++,i++){
        letter[0][i] = c;
        letter[1][i] = 0;
    }
    char c;
    while(true){
        cin.get(c);
        count_letter(letter,c);
        if(isspace(c)) word++;
        if(c=='\n') lines++;
        if(c==';') break;
    }
    cout << "The input had " << lines << " lines, "<< word<< " words,\nand the following letter frequencies:" ;
    for(int i{0}; i<26;i++){
        if(i%8==0) cout << '\n' ;
        cout << '\t'<<  letter[0][i]  << ": " << (int)letter[1][i] << '\t';
    }
    cout << endl;
}
void count_letter(char letter[][26], char c){
    for(int i{0}; i<26; i++){
        if(letter[0][i] == c || tolower(letter[0][i])==c){
            letter[1][i]++;
            break;
        }
    }
}
// bool is_lowercase(char c){
//     return (c >='a' && c <= 'z');
// }
// bool is_uppercase(char c){
//          return (c >= 'A'&& c <= 'Z');
// }
// bool is_letter(char c){
//     return is_lowercase(c) || is_uppercase(c);
// }
// void reduce(string& s){
//     for(int i{0}; i<s.length(); i++){
//         if(is_letter(s[i])){
//             if(is_uppercase(s[i])) continue;
//             else s[i] += 'A' -'a';
//         }else{
//             s.erase(i,1);
//             i--;
//         }
//     }
// }
// int main(){
//     string s;
//     cin >> s;
//     reduce(s);
//     cout << s << endl;
// }

// int main(){
//     char c; int count{0};
//     while(cin.get(c)){
//         if(isspace(c)) count++;
//     }
//     count++;
//     cout << "Total number of words in the given paragraph is: " << count << endl;
// }
// bool Check_String(string& s, string& s_arr, int& k){
//     for(int i{0}; i<k; i++){
//         if(s_arr[i] == s) return true;
//     }
// }
// int main(){
//     string s[100] = {0};
//     int k{0};

// }
