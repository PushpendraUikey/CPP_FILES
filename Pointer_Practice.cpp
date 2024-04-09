#include<iostream>
#include<cmath>

using namespace std;
/*
int main(){
    int n{44};
    cout << "n : " << n << endl;
    cout << "&n : " << &n << endl;
}
*/
// A reference is just an alias or synonym for another variable.
// syntax: type& reference-name = variable-name     They both access the same memory address.
// A reference must be initialised when declared, and initialised to the variable.
/*int main(){
    int n{44};
    int& rn = n;
    cout << "n: " << n << "\t rn: "<< rn << endl;
    n--;
    cout << "n: " << n << "\t rn: "<< rn << endl;
    rn*=2;
    cout << "n: " << n << "\t rn: "<< rn << endl;
    n/=10;
    cout << "n: " << n << "\t rn: "<< rn << endl;
}*/
// References are not the same variable.
/*int main(){
    int n{980};
    int& rn=n;
    int & rn1 = n; int& rn2 = rn; 
    cout << "&n: "<< &n << "\t" << "&rn: " << &rn << endl;
    cout << "&rn1: " << &rn1 << "\t"<< "&rn2: " << &rn2 << endl;
}*/
// Using the pointer variables.
/*int main(){
    int n{8};
    int* pn = &n;                                 // pn holds the memory address of the n
    cout << "pn: " << pn << endl;
    cout << "&pn: " << &pn << endl;               // Shows that pn holds the memory address but it also has its own memory address.
}*/
// The variable pn is called pointer because its value points to the location of another value.
// Dereferencing the pointer.
/*int main(){
    int n{349}; 
    int *pn = &n;
    cout << "pn: " << pn << endl;
    cout << "&pn: " << &pn << endl;
    cout << "*pn: " << *pn << endl;               // Dereferncing is similar as referencing{ use the asterisk(*) before pointer and done.}
}*/
// pointer to pointe
/*int main(){
    int n{349}; 
    int *pn = &n;
    cout << "pn: " << pn << endl;
    cout << "&pn: " << &pn << endl;
    cout << "*pn: " << *pn << endl;
    int **ppn = &pn;                              // pointer to pointer.
    cout << "**ppn: " << **ppn << endl;   
}*/
// although pn and ppn are both pointers but there are not the same type: pn has type pointer int while ppn has type pointer a pointer.

// Referencing is opposite to the dereferencing.
/*int main(){
    int n{88};
    cout << "n: " << n << endl;
    cout << "&n: " << &n << endl;
    int* pn = &n; 
    cout << "pn: " << pn << endl;
    cout << "*pn: " << *pn << endl;
    int &rpn = *pn;         // almost made an alias
    cout << "rpn: " << rpn << endl;
    cout << "&rpn: " << &rpn << endl;

}*/
/*
 int* const Pn=44;                  // constant pointer to an int
 const int* pN=&N;                  // pointer to a constant int
 const int* const PN=&N;            // constant pointer to a constant int
 float& ar[] = { x, y };            // array of 2 references to floats
 float* ap[] = { &x, &y };          // array of 2 pointers to floats
 long& r() { return n; }            // function returning reference to long
 long* p() { return &n; }           // function returning pointer to long
 long (*pf)() { return 44; }        // pointer to function returning long

float& component(float* ,int);      // return type is reference to a variable{Note that this is not supposed to be local variable to function}
int main(){
    float v[4];
    for(int k{1}; k<=4; k++){
        component(v,k) = 1.0/k;
    }
    for(int i{0}; i<4; i++){
        cout << v[i] << endl;
    }
}
float& component(float* v, int k){
    return v[k-1];
}
*/
//Traversing an array with a pointer.
/*int main(){
    const int SIZE = 3;
    short a[SIZE] = {22, 44, 55};
    cout << "a : "<< a << endl;
    cout << "(size of short): " << sizeof(short) << endl;
    short *end = a + SIZE;           // converts the size to offset 6
    short sum{0};
    for(short *p = a; p<end; p++){
        sum += *p;
        cout << "\t p = " << p;
        cout << "\t *p = " << *p;
        cout << "\t sum = " << sum << endl;
    }
    cout << "end: " << end << endl;
}*/

// Code to check if the subarray is inside the larger array. and returns a pointer if it finds out 
/*
short* loc(short*, short[], int, int);

short* loc(short* p1, short a2[], int n1, int n2){
    short* end = p1 + n2;
    for(short* p = p1; p<end; p++){
        if(*p == *a2){
            int j;
            for( j=0; j<n2; j++){
                if(*(p+j) != a2[j])                     // same as  if (p1[j] != a2[j]) break;
                break;
            }
            if(j == n2) return p;
        }
    }
    return 0;
}*/
// The new operator!
/*int main(){
    float* q;   q = new float; // allocates storage for one float
    *q = 3.1459134323;
    cout << *q << endl;
}*/
// The delete operator reverses the action of new operator, dealocates the  
// It can't be used to delete the pointer to a constant.
/*
 void get(double*& a, int& n)
 { cout << "Enter number of items: "; cin >> n;
 a = new double[n];
 cout << "Enter " << n << " items, one per line:\n";
 for (int i = 0; i < n; i++)
 { cout << "\t" << i+1 << ": ";
 cin >> a[i];
 }
 }
 void print(double* a, int n)
 { for (int i = 0; i < n; i++)
 cout << a[i] << " ";
 cout << endl;
 }
 int main()
 { double* a;
 // a is simply an unallocated pointer
 int n;
 get(a,n);
 print(a,n);
 // now a is an array of n doubles
 delete [] a; // now a is simply an unallocated pointer again
 get(a,n);
 // now a is an array of n doubles
 print(a,n);
 }
*/
/*
void get(double *&a, int& n){
    cout << "Enter number of items: " ; cin >> n;
    a = new double[n];                                          // Dynamic allocation of memory.
    cout << "Enter " << n << " number of items perline: "<< endl;
    for(int i{0}; i<n; i++){
        cout << i+1 << ": ";
        cin >> a[i]; 
    }
}
int main(){
    double* a;
    int n;
    get(a,n);
    for(int i{0}; i<n; i++){
        cout << i+1 << ": " << a[i] << endl;
    }
}
*/
/*
int sum(int (*pf)(int k),int n){           // Pointer to a function which takes the integer as a parameter.
    int s{0};                               // pointer to function is quoted within the paranthesis.
    for(int i{1}; i<=n; i++)
        s+= (*pf)(i);
    return s;
}
int square(int k){
    return k*k;
}
int cube(int k){
    return k*k*k;
}
int main(){
    int n; cin >> n; 
    cout << sum(square,n) << endl;
    cout << sum(cube, n) << endl;
}
*/
/*
int main(){
    short a[32];
    for (int i = 0; i < 32; i++)
    *(a++) = i*i;
   for(int i{0}; i<32; i++){
    cout << a[i] << endl;
   }
}*/
/*
int main(){
    float x = 3.14159;
 float* p = &x;
 short d = 44;
 short* q = &d;
 p = q;
}*/
/*
void f(float* Ptr[],int n, float Arr[]){   // We have to pass an array explicitly and cannot return it through the function
    for(int i{0}; i<n; i++){               // Or alternative solutions is that, you can return pointer to the first element of array
        Arr[i] = *Ptr[i];
    }
}
int main(){

}*/
// Algorithm for Reinmann Sum
/*
double Function(double k){
    return sin(k) + pow(k,3.0/4) + log(k);  // You can choose your own function.
}
double Reinman_Sum(double (*f)(double), int a, int b, int partition){
    double h= 1.0 * (b-a)/partition;;
    double sum{0};
    for(int i{0};i<=partition; i++){
        sum += (*f)( a + i*h ) * h;
    }
    return sum;
}
int main(){
    int a,b,partition;
    cout << "Give the interval in which you want your integral values to be: "; cin >> a >> b;
    cout << "For Reimann integral give the number of iteration to sum: "; cin>> partition;
    cout << "Reimann integral of the function sin(k) + pow(k,3.0/4) + log(k): "<< Reinman_Sum(Function,a,b,partition)<< endl;
}*/
/*
double function(double x){
    return log(x);     // we want slope of this function;
}
double numeric_Derivative(double (*f)(double),double x,double h){
    double derivative = 1.0*((*f)(x + h) - (*f)(x - h)) / (2*h) ;   // Remember to put the paranthesis arround all the expressions.
    return derivative;
}
int main(){
    double x,h; cout << "Slope at point: "; cin >> x; 
    cout << "give infinitesimal h which tends to zero: "; cin >> h;
    cout << "Derivative at point " << x << " is: " << numeric_Derivative(function,x,h) << endl;
}
*/
/*
float* max_ptr(float* Arr[],int n){
    float* p = Arr[0];
    for(int i{1}; i<n; i++){
        if(*p < *Arr[i]){
            p = Arr[i];
        }
    }
    return p;
}
int main(){

} */
/*
float * mirror(float * P[], int n){
    float* Arr = new float[n];           // since the scope of the array is limited to the function,
    for(int i{0}; i<n; i++){             // thus dynamically allocate the memory so as to access after function has executed.
        Arr[i] = *P[n-1-i];              // Also it is not good to return array directly from function so write it as a pointer.
    }
    return Arr;
}*/
double func(double x){
    return x*x-2;
}
double root(double (*pf)(double x), double a, double b, int n){  // assuming atleast one root exists between a and b.
    double mid = 0.0;
    for(int k{0}; k<n; k++){
        mid=(a+b)/2;
        if((*pf)(a) * (*pf)(mid) < 0){
            b = mid;
        }
        else{
            a = mid;
        }
    }
    return mid;
}
int main(){
    cout << root(func,1,2,1000) << endl;
}
