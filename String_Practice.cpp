#include<iostream>
#include<cmath>
#include<cstring>
#include<ctype.h>

using namespace std;
// Simple checkup if null-character prints into the terminal or not.
/*int main(){
    char S[] = "ABCD";
    for(int k{0}; k<5; k++){
        cout << "'" << S[k] << "'" << endl;
    }
}*/
// Input output of strings- Word by Word
/*int main(){
    char word[80];
    do{
        cin >> word;
        if(*word) cout << "\t"<< word<< endl;
    } while(*word);
}*/
// Input Output of strings:- line by line _that only upto a specified length
/*int main(){
    char line[90];
    do{
        cin.getline(line,90);
        if(*line) cout << line << endl;
    }while(*line);
}*/
// cin.getline() function with three arguments, delimeters
/*int main(){
    char line[90];
    do{
        cin.getline(line,90,',');
        if(*line) cout << line << endl;
    }while(*line);
}*/
// cin.get() function is used to take input character by character,
// program to count a particular character;                         cin.get() is useful to count a particular character in the line.
/*int main(){
    char ch;
    int count{0};
    while(cin.get(ch)){
        if(ch == 'e') count++;
        if( ch == '*') break;
    }
    cout << count << endl;
}*/
// opposite method of get() in cin is put() in cout, which prints char by char in output stream...
/*int main() {
    char ch, pre='\0';
    while(cin.get(ch)){
        if(pre==' '||pre=='\n') cout.put(char(toupper(ch)));
        else cout.put(ch);
        pre=ch;
    }
}*/
/*
Standard C character function:-
1) isalnum(): int isalnum(int c); 
              Returns nonzero if "c" is numerical or alphabet.
2) isalpha(): int isalpha(int c);
              Returns nonzero if 'c' is alphabet.
3) iscntrl(): int iscntrl(int c);
              Returns nonzero if 'c' is control character.
4) isdigit(): int isdigit(int c);
              Returns nonzero if 'c' is a digit character.
5) isgraph(): int isgraph(int c);
              Returns nonzero if 'c' is a printable non-blank character.
6) islower(): int islower(int c);
              Returns nonzero if 'c' is a lowercase character.
7) isprint(): int isprint(int c);
              Returns nonzero if 'c' is a printable character.
8) isspace(): int isspace(int c);
              Returns nonzero if c is any white-space character, including the blank ' ', the
              form feed '\f', the newline '\n', the carriage return '\r', the horizontal tab
              '\t', and the vertical tab '\v'; otherwise returns 0.v
9) isupper(): int isupper(int c);
              Returns nonzero if c is an uppercase alphabetic character; otherwise returns 0.
10) isxdigit(): int isxdigit(int c);
                Returns nonzero if c is one of the 10 digit characters or one of the 12 hexadecimal
                digit letters: 'a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E',
                or 'F'; otherwise returns 0.
11) tolower(): int tolower(int c);
            Returns the lowercase version of c if c is an uppercase alphabetic character;
            otherwise returns c.
12) toupper(): int toupper(int c);
            Returns the uppercase version of c if c is a lowercase alphabetic character; other
            wise returns c.
*/
/*int main(){
    char name[5][20];
    int count{0};
    cout << "Give five names with not more than 19 characters in each line." << endl;
    while(count<5 && cin.getline(name[count++],20));
    
    for(int i{0};i<count;i++)
    cout << i << ":\t"<<name[i] << endl;
}*/
/* Not fully understandable till now.
int main(){
    char buffer[80];
    cin.getline(buffer,80,'$');
    char* name[4];
    name[0] = buffer;
    int count{0};
    for(char* p=buffer; *p != '\0'; p++)            // iterates over each character of the string buffer.
    if(*p == '\n'){
        *p = '\0';
        name[++count] = p + 1;
    }
    
    cout << "Then names are:\n";
    for(int i{0}; i<count; i++){
        cout << "\t"<< i << ". ["<< name[i] << "]" << endl;    // Since name[i] is char* thus if put the address of first char of the string then it prints the whole string
    }
}
*/
// standard initialisation of char*'s
/*
int main(){
    const char* name[]
    = {"Pushpendra Uikey", "Nandni Uikey", "Poonam Uikey", "Anwar Singh Uikey", "Sarupa Bai Uikey"}; // constant strings are these so const char* required
    cout << "The names are here:\n";
    for(int k{0}; k<5; k++){
        cout << k << ":\t" << name[k] << endl;
    }
}*/


// We will now use <CSTRING> function 
// strlen() function
/*int main(){
    char s[] = "ABCDEFGHIJKLMNO";
    cout << "strlen("<< s<<"):" << strlen(s) << endl;
    char buffer[90];
    cin.getline(buffer,90);
    cout << "strlen(buffer) = " << strlen(buffer) << endl;
}*/
/*
int main(){
    char s[]= "The Mississippi is a long river.";
    char* p = strchr(s, ' ');
    cout << "strchr(s, ' ') points to s[" << p-s << "].\n" ;
    p = strchr(s, 's');
    cout << "strchr(s, 's') points to s[" << p-s << "].\n" ;
    p = strrchr(s, 's');
    cout << "strrchr(s, 's') points to s[" << p-s << "].\n" ;
    p = strstr(s,"is");
    cout << "strstr(s, \"is\") points to s[" << p-s << "].\n" ;
    p = strstr(s,"isi");
    if (p == NULL)
    cout << "strstr(s, \"isi\") returns NULL.\n" ;

}*/
// strcpy(s1,s2) copis s2 to s1, your duty to check boundness and all.
/*int main(){
    char s1[]="ABCDEF", s2[]="XYZ";
    cout << s1 << '\t' << s2 << endl;
    cout << "After strcpy() function called: "<< endl;
    strcpy(s1,s2); 
    cout << s1 << '\t' << s2 << endl;
}*/
/*
int main() {         // strncpy() function replaces first n letter's of s1, with the first n letters taken from s2.
    char s1[]="ABCDEF", s2[]="XYZ";
    cout << s1 << '\t' << s2 << endl;
    cout << "After strncpy() function called: "<< endl;
    strncpy(s1,s2,3); 
    cout << s1 << '\t' << s2 << endl;
}*/
//  strcat() function
/*int main(){
    char s1[10]="ABCDEF", s2[]="XYZ";   // if s1 hasn't enough space, it would cause the program to abort.
    cout << s1 << '\t' << s2 << endl;
    cout << "After strcat() function called: "<< endl;
    strcat(s1,s2); 
    cout << s1 << '\t' << s2 << endl;
}*/
// strncat() function
/*int main(){
    char s1[10]="ABCDEF", s2[]="XYZ";   // if s1 hasn't enough space, it would cause the program to abort.
    cout << s1 << '\t' << s2 << endl;
    cout << "After strcat() function called: "<< endl;
    strncat(s1,s2,2); 
    cout << s1 << '\t' << s2 << endl;
}*/
// The string concatenation function strtok() 
/*int main() {
    char s[] = "Today's date is April 15th 2024. ";
    char * p;
    cout << "The string is: [" << s << "]\nIts tokens are: \n";
    p = strtok(s," ");
    while(p){
        cout << "\t[" << p << "]\n";
        p = strtok(NULL," ");   // conitnue tokenizing from where you left..
    }
    cout << "Now the string is: [" << s << "]\n";
}*/
// strpbrk(): this function returns FIRST match of any of the letter of the second string from the first string.
/*int main(){
    char s[]="The mississippi is a long river.";
    cout << "s = \"" << s << "\"" << endl;
    char *p = strpbrk(s,"nopqr");
    cout << "strpbrk(s,\"nopqr\") = [" << p -s << "]" << endl;
    p = strpbrk(s, "NOPQR");                // if none of the character matches from the second string then it points to NULL
    if(p==NULL) cout << "It points to null." << endl;
}*/
/*
 1) memcpy(): void* memcpy(void* s1, const void* s2, size_t n);
            Replacesthefirst n bytesof *s1withthefirst n bytesof *s2.Returns s.
 2) strcat(): char* strcat(char* s1, const char* s2);
            Appends s2 to s1.Returns s1.
 3) strchr(): char* strchr(const char* s, int c);
            Returnsapointertothefirstoccurrenceof c in s.Returns NULL if c isnotin s.
 4) strcmp(): int strcmp(const char* s1, const char* s2);
            Compares s1 with substring s2. Returns a negative integer, zero, or a positive integer,
            according to whether s1 is lexicographically less than, equal to, or greater than s2.
 5) strcpy(): char* strcpy(char* s1, const char* s2);
            Replaces s1with s2.Returns s1.
 6) strcspn(): size_t strcspn(char* s1, const char* s2);
            Returns the length of the longest substring of s1 that begins with s1[0] and 
            contains none of the characters found in s2.
 7) strlen(): size_t strlen(const char* s);
            Returns the length of s, which is the number of characters beginning with s[0] that
            precede the first occurrence of the NUL character.
 8) strncat(): char* strncat(char* s1, const char* s2, size_t n);
            Appends the first n characters of s2 to s1.Returns s1.If n ≥ strlen(s2),
            then strncat(s1,s2,n) has the same effect as strcat(s1,s2).

 9) strncmp(): int strncmp(const char* s1,const char* s2, size_t n);
            Compares the first n characters of s1 with the first n characters of s2. Returns a
            negative integer, zero, or a positive integer, according to whether the first substring is
            lexicographically less than, equal to, or greater than the second. If n ≥ strlen(s2), 
            then strncmp(s1,s2,n) and strcmp(s1,s2) have the same effect.
 10) strncpy(): char* strncpy(char* s1, const char* s2, size_t n);
            Replaces the first n characters of s1 with the first n characters of s2. Returns s1.
            If n ≤ strlen(s1), then the lengthof s1 is not affected. If n ≥ strlen(s2),
            then strncpy(s1,s2,n) and strcpy(s1,s2) have the same effect.
 11) strpbrk(): char* strpbrk(const char* s1, const char* s2);
            Returns the address of the first occurrence in s1 of any of the characters in s2.
            Returns NULL if none of the characters in s2 appears in s1.
            strrchr() char* strrchr(const char* s,int c);
            Returns a pointer to the last occurrence of c in s. Returns NULL if c is not in s.
 12) strspn(): size_t strspn(char* s1, const char* s2);
            Returns the length of the longest substring of s1 that begins with s1[0] and contains 
            only characters found in s2.
 13) strstr(): char* strstr(const char* s1,const char* s2);
            Returns the address of the first occurrence of s2 as a substring of s1. Returns NULL
            if ch is not in s1.
 14) strtok(): char* strtok(char* s1, const char* s2);
            Tokenizes the C-string s1 into tokens delimited by the characters found in C-string
            s2. After the initial call strtok(s1, s2), each successive call strtok(NULL,s2) 
            returns a pointer to next token found in s1. These calls change the C-string s1,
            replacing each delimiter with the NUL character '\0'.
*/
/*int main(){
    char s[6] = {'H', 'e', 'l', 'l', 'o'};
    cout << s << endl;
}*/
// Counts the Capital alphabets
/*int main(){
char s[] = "123 W. 42nd St., NY, NY 10020-1095";
 int count = 0;
 for (char* p = s; *p; p++)
 if (isupper(*p)) ++count;
 cout << count << endl;
}*/
// converts the capital letters to small letters.
/*int main(){
    char s[] = "123 W. 42nd St., NY, NY 10020-1095";
 for (char* p = s; *p; p++)
 if (isupper(*p)) *p = tolower(*p);
 cout << s << endl;
}*/
// increase the Capital letters by one.
/*int main(){
    char s[] = "123 W. 42nd St., NY, NY 10020-1095";
 for (char* p = s; *p; p++)
 if (isupper(*p)) (*p)++;
 cout << s << endl;
}*/
// counts punctuatation marks in the string
/*int main(){
    char s[] = "123 W. 42nd St., NY, NY 10020-1095";
 int count = 0;
 for (char* p = s; *p; p++)
 if (ispunct(*p)) ++count;
 cout << count << endl;
}*/
/*int main(){
    char s[] = "123 W. 42nd St., NY, NY 10020-1095";
 for (char* p = s; *p; p++)
 if (ispunct(*p)) *(p-1) = tolower(*p);
 cout << s << endl;
}*/
/*int main(){
    char first[19] = "Rutherford";
    char last[] = "Hayes";
    strncat(first, last,3);
    cout << first << "    " << last << endl;
}*/
/*int main(){
  //int n = strspn("abecedarian","abcde");
  //int n = strspn("beefeater","abcdef");
  //int n = strspn("baccalaureate","abc");
  //int n = strcspn("baccalaureate","rstuv");
  cout << n << endl;
}*/
/*int main(){
    char s1[] = "ABCDE";
 char s2[] = "ABC";
 if (strcmp(s1,s2) == 0) cout << s1 << " < " << s2 << endl;      // Positive if s1 is greater than s2 lexicographically
 else cout << s1 << " >= " << s2 << endl;
}*/
/*
 int main()
 { char name[10][20], buffer[20];
 int count = 0;
 while (cin.getline(buffer,20))
 strcpy(name[count++],buffer);
 --count;
 cout << "The names are:\n";
 for (int i = 0; i < count; i++)
 cout << "\t" << i << ". [" << name[i] << "]" << endl;
 }
*/
 /*int main()
 { char word[80];
 do
 { cin >> word;
 if (*word) cout << "\t\"" << word << "\"\n";
 } while (*word);
 }*/
 /*  This function sets example of using cin.putback(), taking int from a string
 int nextInt();
 int main(){ 
        int m = nextInt();
        int n = nextInt();
        cin.ignore(80,'\n'); // ignore rest of input line
        cout << m << " + " << n << " = " << m+n << endl;
 }
 int nextInt(){ 
        char ch;
        int n;
        while (cin.get(ch))               // cin function starts reading the input again from where it left.
            if (ch >= '0' && ch <= '9')   // next character is a digit
        {  
            cin.putback(ch);              // put it back so it can be read as a complete int
            cin >> n;
            break;
 }
    return n;
 }
 */
/* Another Version of nextInt() function using cin.peek()
 int nextInt()
 { char ch;
 int n;
 while (ch = cin.peek())
 if (ch >= '0' && ch <= '9')
 { cin >> n;
 break;
 }
 else cin.get(ch);
 return n;
 }
*/
int main(){
    int n = strspn("abecedarian","abcde");
    cout << n << endl;
     n = strspn("beefeater","abcdef");
     cout << n << endl;
   n = strspn("baccalaureate","abc");
   cout << n << endl; 
   n = strspn("baccalaureate","rstuv");
   cout << n << endl;
}