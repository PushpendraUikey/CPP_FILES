// FUNCTIONS

#include<iostream>
#include<cmath>
#include<climits>
#include<cctype>
#include<cstdlib>
#define e 2.718281828459045
#define PI 3.14159265

using namespace std;
/*
int main(){
    for (int x=0; x<6;x++)
    cout << "\t" << x << "\t" << sqrt(x) << endl;
}
*/
/*
int main() {
    // tests the identity sin(2x) = 2sinx cosx
    for (float x{0}; x < 2; x+=0.2)
    cout << x << "\t\t" << sin(2*x) << "\t" << 2*sin(x)*cos(x) << endl;
    float y = sqrt(1+2*sqrt(3+4*sqrt(5)));
    cout << y << endl;
}  // takes the value in radian 
*/
/* Function defined in the <cmath> header file 

acos(x)       inverse cosine of x (in radians)        acos(0.2) returns 1.36944
asin(x)       inverse sine of x (in radians)          asin(0.2) returns 0.201358
atan(x)       inverse tangent of x (in radians)       atan(0.2) returns 0.197396
ceil(x)       ceiling of x (rounds up)                ceil(3.141593) returns 4.0
cos(x)        cosine of x (in radians)                cos(2) returns -0.416147
exp(x)        exponential of x (base e)               exp(2) returns 7.38906
fabs(x)       absolute value of x                     fabs(-2) returns 2.0
floor(x)      floor of x (rounds down)                floor(3.141593) returns 3.0
log(x)        natural logarithm of x (base e)         log(2) returns 0.693147
log10(x)      common logarithm of x (base 10)         log10(2) returns 0.30103
pow(x,p)      x to the power p pow(2,3)               returns 8.0
sin(x)        sine of x (in radians)                  sin(2) returns 0.909297
sqrt(x)       square root of x                        sqrt(2) returns 1.41421
tan(x)        tangent of x (in radians)               tan(2) returns -2.18504

Notice that every mathematical function returns a double type.
*/
/* Some of the header Files in the standard C++ Library 
<cassert>         Defines the assert() function
<ctype>           Defines functions to test characters
<cfloat>          Defines constants relevant to floats
<climits>         Defines the integer limits on your local system
<cmath>           Defines mathematical functions
<cstdio>          Defines functions for standard input and output
<cstdlib>         Defines utility functions
<cstring>         Defines functions for processing strings
<ctime>           Defines time and date functions
*/
// A Cube function
/*int cube(int);
int main () {
    int n{1}, m{3}; 
     do{
        cout << "Give two numbers for comparision: ";
        cin >> n >> m; 
        cout << "The maximum of the two numbers is: " << max(n,m) << endl;
     } while( n !=0 || m !=0 );  // Terminates only when both the terms are zero 
     cout << cube(34) << endl;
}
*/
// A return statement is like a break statement. It is a jump statement 
// that jumps out of the function that contains it.
// We also can give the parameters as expressions.
/* When you pass an expression like 2*a-3 to a function that takes parameters by reference,
   the function works with a copy of the result of that expression, and any changes made
   to the parameters inside the function will not affect the original variable
   in the 'main' function.
*/
/* Afunction call involves substantial overhead. Extra time and space have to 
   be used to invoke the function, pass parameters to it, allocate storage for
   its local variables, store the current variables and the location of execution
   in the main program, etc. In some cases, it is better to avoid all this by 
   specifying the function to be inline. This tells the compiler to replace each 
   call to the function with explicit code for the function.
 */
// to access global variable with the same variable inside a block where a local variable
// has been declared with same name(to override it basically), use this syntax {:: VarName}
/* U can use same name for different functions. As long as they have diff parameter
   types lists, or parameter are of diff types 
*/
/* 1) use a return statement in main();
   2) call the exit() function;
   3) call the abort() function;
   4) throw an uncaught exception; 
*/
// The exit() function defines in the <cstdlib> header. It is useful for terminating
// a program within a function other than main().
// Want to provide default parameters, put them in the end. 

/*
void printdate(int d, int m, int y);
void printCharCategory(char c);  // Classifying the Characters >>> included the library {cctype}.
bool isPrime(int n);
int age();
void swap(float&, float&);
void computeCircle(double& , double& , double r);
int Cube(int x);
int max(int, int);
int max(int, int, int);
double reciprocal(double);
double p(double, double, double=0, double=0,double=0);
bool SayleapYear(int n);
double cos2x(double);
double check_sin_cos(double);
*/
int min(int,int,int,int);
double check_exponential(double,double);
int min(int, int);
unsigned long long fact(int);
long perm(int,int);
int perm_2(int,int);
void computeTriangle(float&,float&,float,float,float);
void computeSphere(float&,float&,float);
long long combinotorics(int,int);
long long combinotorics_2(int,int);
int gcd(int,int);
int lcm(int,int);

int main(){
    cout << gcd(45, 99) << " " << gcd(63,39) << " "
    << lcm(345,422) << ' ' << lcm(39,52) << endl;
}

int lcm(int m, int n){
    return (m*n)/gcd(m,n);
}
int gcd(int m, int n){
    if(m>n){
        while(n!=0){
            int temp{m%n};
            m = n;
            n = temp;
        }
        return m;
    }
    else {
        while(m!=0){
            int temp{n%m};
            n = m;
            m = temp;
        }
        return n;
    }
}
long long combinotorics(int n, int k){
    long long temp = fact(k)*fact(n-k);
    return fact(n)/temp;
}
long long combinotorics_2(int n, int k){
    return perm(n,k)/fact(k);
}
void computeSphere(float &v,float& s, float r){
    s = 4* PI * r*r;
    v = (4.0/3)*PI*r*r*r;
}
void computeTriangle(float& a, float& p, float x, float y, float z){
    float s = (x+y+z)/2; p = 2*s ;
    float temp_pdt = s*(s-x) + s*(s-y) + s*(s-z);
    a = sqrt(temp_pdt);
}
int perm_2(int n, int k){
    int j{1};
    for(int i{n}; i>=n-k+1; i-- ){
        j *= i;
    }
    return j;
}
unsigned long long fact(int n){
    long k{1};
    for(int i{1}; i <=n ; i++)
        k = k*i;
    return k;
}
long perm(int n, int k){
    if( n < 0 || k<0 || k > n) return 0;
    return fact(n)/fact(n-k);   // Permutation nPk is equal to n!/(n-k)! 
}
int min(int a, int b){
    return a < b ? a:b;
}
int min(int a, int b, int c, int d){
    //int temp1 = (a < b ? a:b);
    //int temp2 = (c < d ? c:d);
    //return (temp1 < temp2 ? temp1: temp2); 
    return min(min(a,b),min(c,d));
}
double check_exponential(double b, double x){
    return pow(e, x*log(b));
}
/*
double check_sin_cos(double x){
     return cos(x)*cos(x)+sin(x)*sin(x);
}
double cos2x(double x){
    return 2*cos(x)*cos(x)-1;
}
bool SayleapYear(int n){
    if((n%4==0 && n%100 !=0) || n % 400 == 0) return true;
    else return false;
}
double p(double x, double a0, double a1, double a2, double a3){
    return a0 + (a1 +(a2 + a3*x)*x)*x;
}
double reciprocal(double x){
    if(x==0) exit(1);                 // Terminates the program
    return 1.0/x;
}
int max(int x, int y, int z){
     int m = (x > y ? x : y);
     return (m>z ? m : z);
}
int max(int x, int y){
    if(x>y) return x;
    else return y;
}
inline int Cube(int x){         // "inline" says that whenever function is called
    return x * x * x;           // replace it by explicit code.
}
void computeCircle(double& area, double& circumference, double r){
    const double pi = 3.14159265;
    area = pi * r * r;
    circumference = 2 * pi * r;
}
void swap(float &x, float &y){
    float temp = x;
    x = y;
    y = temp;
}
int age(){
    int age;
    while(true){
    cout << "How old are you: "; cin >> age;
    if(age<0) cout << "Your age could not be negative.";
    else if(age > 120) cout<<"Your age could not be more than 120 years.";
    else return age;             // Only this return statement will terminate the program otherwise the infinite loop will run until valid input.
    cout << "\n\tTry again.\n";
    }
}
bool isPrime(int n){
    float sqrtn = sqrt(n);
    if(n<2) return false;
    if(n<4) return true;
    if(n%2 == 0) return false;
    for(int i{3}; i<sqrtn; i += 2){
        if(n%i == 0) return false;
    }
    return true;
}
void printCharCategory(char c){
    cout << "The character [" << c << "] is a ";
    if          (isdigit(c))  cout << "digit.\n";
    else if     (islower(c))  cout << "lower-case letter.\n";
    else if     (isupper(c))  cout << "upper-case letter.\n";
    else if     (isspace(c))  cout << "white space character.\n";
    else if     (iscntrl(c))  cout << "control character.\n";
    else if     (ispunct(c))  cout << "punctuation mark.\n";
    else                      cout << "Error.\n";
}
void printdate(int d, int m, int y){
    if(m <= 12) {
    switch(m){
        case 1: cout << "January " ; break;
        case 2: cout << "February "; break;
        case 3: cout << "March " ; break; 
        case 4: cout << "April " ; break; 
        case 5: cout << "May " ; break;
        case 6: cout << "June " ; break;
        case 7: cout << "July " ; break; 
        case 8: cout << "August "; break; 
        case 9: cout << "September "; break; 
        case 10: cout << "October " ; break; 
        case 11: cout << "November "; break;
        case 12: cout << "December "; break; 
        default :  break;
    }    // Return at the end of each code line says do it and don't go ahead.
    if(m == 2){  // Checks the leap year 
        if(y%4 == 0  && (y%100 != 0 || y%400 == 0)){
            if(d<30){
                cout<< d << ", "<< y << endl;
                return;
            }
        }
        else if(d <29) {   // if it has 28 days
            cout << d << ", " << y << endl; return;
        }
        else { cout << "\nEnter valid date! \n"; return; }
    }
    if(m <= 7 && m%2 == 0){  // checks for 30 day month 
        if(d<=30){
            cout << d << ", " << y << endl;
            return;
        }
        else {cout << "\nEnter valid date! \n"; return; }
    }
    if(m <= 7 && m%2 == 1){  // checks for 31 days a month 
        if(d<=31){
            cout << d << ", " << y << endl; return;
        }
        else{cout << "\nEnter a valid date! \n"; return;}
    }
    if(m<=12 && m%2 == 0){  // Checks for 31 days a month 
        if(d<=31){
            cout << d << ", " << y << endl; return; 
        }
        else {cout << "\nEnter a valid date! \n"; return;}
    }
    if(m<=12 && m%2 == 1){  // Checks for 30 days a month 
        if(d<=30){
            cout << d << ", " << y << endl; return; 
        }
        else {cout << "\nEnter a valid date! \n"; return;}
    }
    }
}

*/