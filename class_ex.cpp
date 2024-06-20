#include<iostream>
using namespace std;

// class Ratio{
//     private: int num, den;
//     public:
//         void invert();
//         void print();
//         double convert();
//         void assign(int, int);
// };

// int main() {
//     Ratio x;
//     x.assign(22,7);
//     cout << "x = ";
//     x.print();
//     cout << " = " << x.convert() << endl;
//     x.invert();
//     cout << "1/x = "; x.print();
//     cout << endl;
// }

// void Ratio::assign(int numerator, int denominator){
//     num = numerator;
//     den = denominator;
// }

// double Ratio::convert(){
//     return double(num)/den;
// }

// void Ratio::invert(){
//     int temp = num;
//     num = den;
//     den = temp;
// }

// void Ratio::print(){
//     cout << num << '/' << den ;
// }
/*-----------------------------------------Adding a single constructor in class---------------------------------------------------*/
// constructor: this is used to initialze values of classes as soon as they are declared.
// A constructor is a member function which is invoked automatically, when the object(class) is delcared.

// class Ratio{
//     public:
//         Ratio(int n, int d) { num = n; den = d;}
//         void print(){
//             cout << num << '/' << den;
//         }
//     private:
//         int num, den;

// };
// int main(){
//     Ratio x(-1,3), y(222,7);
//     cout << " x: ";
//     x.print();
//     cout << " and y: ";
//     y.print();
//     cout << endl;
// }

/*-----------------------------------------------Adding more constructor in a class----------------------------------------------*/

// class Ratio{
//     private: int num, den;
//     public:
//         Ratio(){ num =0; den = 1;}          // constructor for no parameters passed
//         Ratio(int n){num = n; den =1;}      // constructor for single parameter passed
//         Ratio(int n, int d) { num = n; den = d;}
//         void print(){
//             cout << num << '/' << den;
//         }
// };

// int main(){
//     Ratio x, y(5), z(23,24);    // since we didn't want to pass any arguments into the x, hence we didn't used paranthesis.
//     cout << "x: ";
//     x.print();
//     cout << ", y: ";
//     y.print();
//     cout << " and z: ";
//     z.print();
//     cout << endl;
// }

/*------------------------------------------------Adding constructors with Initializers List-------------------------------------------*/

// class Ratio{
//     private:
//         int num, den;
//     public:
//         Ratio(): num(0), den(1) {}              // Initializer lists are declared outside the function body, and followed by 'colon'
//         Ratio(int n): num(n), den(1) {}         // Initializer's list declaration precedes the function body
//         Ratio(int n, int m): num(n), den(m) {}
//         void print(){
//             cout << num << '/' << den;
//         }
// };
// int main(){
//     Ratio x, y(2), z(3,4);
//     cout << "\nx: ";
//     x.print();
//     cout << "\ny: ";
//     y.print();
//     cout << "\nz: ";
//     z.print();
//     cout << endl;
// }

/*---------------------------------------Using default value parameter in the Ratio class constructor---------------------------------*/

// class Ratio{
//     public:
//         Ratio(int n=0, int d=1): num(n), den(d) { }
//         void print(){
//             cout << num << '/' << den ;
//         }
//     private:
//         int num, den;
// };
// int main(){
//     Ratio x, y(34), z(27,23);
//     cout << "x: ";
//     x.print();
//     cout << "\ny: ";
//     y.print();
//     cout << "\nz: ";
//     z.print();
//     cout << endl;
// }

/*----------------------------------------------Access Function in the Ratio-------------------------------------------------*/

// class Ratio{
//     public:
//         Ratio(int n=0, int d=1): num(n), den(d) { };
//         int numerator() const {     return num; }       // const keyword used in the declaration of access function
//         int denominator() const { return den; }

//     private:
//         int num, den;
// };

// int main(){
//     Ratio x, y(4), z(8,34);
//     cout << z.numerator() << "/" << z.denominator() << endl;
// }

/*-----------------------------------------------Using private member function--------------------------------------------------*/

// class Ratio{
//     public:
//         Ratio(int n=89, int d= 23): num(n), den(d) { reduce(); }    // When constructor automatically executes, it calls reduce() method
//         void print() const {
//             cout << num << '/' << den << endl;
//         }
//     private: 
//         int num, den;
//         void reduce();
// };
// int gcd(int, int);
// void Ratio::reduce(){
//     // Enforce invariant(den>0)
//     if(num==0||den==0){
//         num = 0;
//         den = 1; 
//         return;
//     }
//     if(den<0){
//         den *= -1;
//         num *= -1;
//     }
//     // enforcement invariant gcd(num,den) = 1;
//     if(den == 1) return;  // It's already reduced.
//     int sgn = (num<0? -1:1);    // No negative in gcd function
//     int g = gcd(sgn*num,den);
//     num /= g;
//     den /= g;
// }
// int gcd (int m, int n){
//     if(m<n) swap(m,n);
//     while(n>0){
//         int rem = m%n;
//         m = n;
//         n = rem;
//     }
//     return m;
// }

// int main(){
//     Ratio x(200,-720);
//     x.print();
// }


/*------------------------------------------Adding a copy constructor to the ratio class-------------------------------------------------*/
/*-----------------------------------------Tracing the copy constructory-------------------------------------------------*/
// class Ratio{
//     public:
//         Ratio(int n=89, int d= 23): num(n), den(d) { reduce(); }    // When constructor automatically executes, it calls reduce() method
//         Ratio(const Ratio& r) : num(r.num), den(r.den) {  
//              cout << "Copy constructor called: \n";
//           }
//         void print() const {
//             cout << num << '/' << den << endl;
//         }
//     private: 
//         int num, den;
//         void reduce();
// };
// int gcd(int, int);
// void Ratio::reduce(){
    // Enforce invariant(den>0)
    // if(num==0||den==0){
    //     num = 0;
    //     den = 1; 
    //     return;
    // }
    // if(den<0){
    //     den *= -1;
    //     num *= -1;
    // }
    // enforcement invariant gcd(num,den) = 1;
//     if(den == 1) return;  // It's already reduced.
//     int sgn = (num<0? -1:1);    // No negative in gcd function
//     int g = gcd(sgn*num,den);
//     num /= g;
//     den /= g;
// }
// int gcd (int m, int n){
//     if(m<n) swap(m,n);
//     while(n>0){
//         int rem = m%n;
//         m = n;
//         n = rem;
//     }
//     return m;
// }
// Ratio f(Ratio r){           // copy constructor is called
//     Ratio s(r);             
//     return r;               // copy constructor is called
// }
// int main(){
//     Ratio x(200,-720);
//     x.print();
//     Ratio y(x); // copy constructor must have one parameter, class must be same, must be passed using const reference.
//     y.print();
//     f(y);
// }

/*------------------------------------------------Including a Destructor in a class-------------------------------------------------*/
            // It is created automatically if it is not created, by system.
    
// class Ratio{
//     public:
//         Ratio() { cout << " Constructor is called: "<< endl; }
//         ~Ratio() { cout << "Destructor is called: " << endl;}

//     private:
//          int num, den;
// };

// int main(){
//     {       // scope of x starts here.
//         Ratio x; cout << "class Ration is alive"<<endl;
//     }   // Scope of x ends here., Destructor is called automatically.
// }

/*------------------------------------------Constant Objects--------------------------------------------------------------*/
// It is good practice to declare, objects const if you don't want to change them in future.
// const char BLANK = ' ';
// const int MAX_INT = 2147483647;
// const double PI = 3.141592653589793;
// void init(float a[], const int SIZE);
// class Ratio{
//     public:
//         Ratio(int n=89, int d= 23): num(n), den(d) { }    // When constructor automatically executes, it calls reduce() method
//         Ratio(const Ratio& r) : num(r.num), den(r.den) {  
//              cout << "Copy constructor called: \n";
//           }
//         void print() const {    // A function is declared constant by inseting the const keyword bw its parameter list and body
//             cout << num << '/' << den << endl;
//         }
//     private: 
//         int num, den;
// };
// int main(){
//     const Ratio PI(22,7);
//     PI.print();
// }

/*--------------------------------------------- Structures-------------------------------------------*/
// classes in C++ are generalization of structures.
// struct  Ratio
// {
//     private:
//         int num, den;
// };
// int main(){

// }

/*-------------------------------------------------Using Pointers to Objects---------------------------------------------*/

// class X{
//     public:
//         int data;
// };
// int main(){
//     X* p = new X;   
//     (*p).data = 22;     // equivalent to---( p->data = 22;)---
    // Note that while dereferencing paranthesese is required because '.' has higher precedence than '*'
//     cout << "(*p).data : " << (*p).data << "    " << p->data << endl;
//     p->data = 44;
//     cout << "p->data : " << p->data << "    " << (*p).data << endl;
// }

/*-------------------------------------------A node class for linked list------------------------------------*/
// class Node{
//     public:
//         Node(int d, Node* q=0): data(d), next(q) {  }
//         int data;
//         Node* next;
// };

// int main(){
//     int n; Node* p;
//     Node* q = 0;
//     while(cin >> n){
//         p = new Node(n, q);
//         q = p;
//     }
//     for( ; p; p = p->next){
//         cout << p->data << " -> ";
//     }
//     cout << "*\n" ;
// }

////////////////////// Didn't understood anything but still okay, yeah 

/*--------------------------------------------Static Data Members-------------------------------------------------*/
    // We wanna have only one instance of data member, no matter how many number of instances of object created then we use static


// class X{
//     public:
//         static int n;   // Declaration of n as a static member
// };
// int X::n = 0;   // definition of n
// To give the definition to the member function or data, we need double colon see, carefully

// int main(){
//     X x;
//     cout << x.n << endl;
// }

/*--------------If you wanna keep track of how many instances of object you have-----------------*/

// class widget
// {
// private:
//     /* data */
// public:
//     widget(/* args */) { ++count; }
//     ~widget() { --count; }
//     static int count;
// };              // Even if you create different no. of several instances of widget, then too the 'count' will be same throughout.
// int widget::count = 0;

// int main(){
//     widget w,x;
//     cout << "Now there are " << w.count << " widgets\n";
//     {
//         widget a, b, c, d;
//         cout << "Now there are " << w.count << " widgets\n";
//     }
//     widget m, n;
//     cout << "Now there are " << w.count << " widgets\n";
// }


/*------------------------------------------ Static data member which is private-----------------------------------------*/

// class Widget{
//     public:
//     Widget() { ++count; }
//     ~Widget() { --count; }
//     int widgetCount() { return count; }         // since private data members can't be accessed outside that's why, we are returning it through 'count'
//     private:
//     static int count;     
// };
// int Widget::count = 0;          // This kind of outside declaration can be done to static members only.

// int main(){
//     Widget x, y, z;
//     cout << "Now there are " << x.widgetCount() << " widgets:\n";
//     {
//         Widget p, q;
//         cout << "Now there are " << x.widgetCount() << " widgets:\n";
//     }
//     Widget a;
//     cout << "Now there are " << z.widgetCount() << " widgets:\n";
// }

/*--------------------------------------------Static Function Member----------------------------------------------------*/

class Widget{
    public:
        Widget() { ++count; }
        ~Widget() { --count; }
        static int num() { return count;}       // Declaring it static makes it independent of the instances.
    private:
        static int count;
};
int Widget::count = 0;

int main(){
    cout << "No of widgets: " << Widget::num() << " \n";
    Widget a, b, c;
    cout << "No of widgets: " << Widget::num() << " \n";
    {
        Widget p, q, r;
        cout << "No of widgets: " << Widget::num() << " \n";
    }
    Widget x;
    cout << "No of widgets: " << Widget::num() << " \n";
}