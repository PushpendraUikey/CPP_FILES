#include<iostream>
#include<cstdlib>
#include<cmath>
#include<bits/stdc++.h>
#define PI 3.141527
using namespace std;

class Point {
    public:
        Point() {   }   // It is default constructor.
        ~Point() {  } // It is defualt destructor.
        Point(Point& r): x(r.x), y(r.y), z(r.z) {  }

        void negate() {
            x = -x; y = -y; z = -z;
        }
        double norm(){
            double n = x*x + y*y + z*z;
            n = sqrt(n);
            return n;
        }
        void print(){
            cout << x << ", " << y << ", " << z << endl;
        }

    private:
        double x, y, z;

};

class Time
{
private:
    int h, m, s;
public:
    Time(int h, int m, int s): h(h), m(m), s(s) {    };
    ~Time();
    void advance(int h1, int m1, int s1){
        h+=h1; m+=m1; s+=s1;
    }
    void reset(int h1, int m1, int s1){
        h = h1; m = m1; s = s1;
    }
};

// Time::Time(/* args */)
// {
// }

// Time::~Time()
// {
// }

// class Stack
// { public:
// Stack(int s=10) : size(s), top(-1) { a = new int[size]; }   // Dynamic allocation
// ~Stack() { delete [] a; }           // free up the memory
// void push(const int& item) { a[++top] = item; }     // push into the array
// int pop() { return a[top--]; }      // remove from the array
// bool isEmpty() const { return top == -1; }  
// bool isFull() const { return top == (size-1); }
// private:
// int size; // size of array
// int top; // top of stack
// int* a; // array to hold stack items
// };

// class Random
// {
// private:
//     /* data */
//     int n;
// public:
//     Random(int r = NULL): n(r){};
//     ~Random();
//     int random();
// };
// int Random::random(){
//     srand(n);   // Initialising the rand() with given seed.
//     int r = rand();
//     return r;
// }

class Person
{
    private:
        string name; 
        string DOB;
        string DOD;
        
    public:
        Person(string n, string db, string dd): name(n), DOB(db), DOD(dd) {     }
        ~Person() { }

        // Access function accesses the private data of class.
        string getName() {
            return name;
        }
        string getDob() {
            return DOB;
        }
        string getDod() {
            return DOD;
        }

        void Print() ;
};

void Person::Print(){
    cout << "Name : " << name <<'\n' << "DOB : " << DOB << '\n' << "DOD : " << DOD << '\n';
}

class Person1
{ public:
Person1(const char* = 0, int =0, int =0);   // default is to point null
~Person1() { delete [] name_; }
char* name() { return name_; }
int born() { return yob_; }
int died() { return yod_; }
void print();
private:
int len_;
char* name_;
int yob_, yod_;
};
Person1::Person1(const char* name, int yob, int yod)    // even define constructor function outside the scope.
: len_(strlen(name)),
name_(new char[len_+1]),
yob_(yob),
yod_(yod)
{ memcpy(name_, name, len_+1);
}

void Person1::print()
{ cout << "\tName: " << this -> name_ << endl;  // this keyword can be used too.
if (yob_) cout << "\tBorn: " << yob_ << endl;
if (yod_) cout << "\tDied: " << yod_ << endl;
}

class Matrix{
    private:

        int a_, b_, c_, d_;     // we can't access the private members outside the class. Hence advised to use getter-setter.

    public:
        Matrix(int a=0, int b = 0, int c = 0, int d = 0);
        ~Matrix() {};

        Matrix(Matrix & m);
        int det();
        bool isSingular();
        void print();
};

Matrix::Matrix(int a, int b, int c, int d):
a_(a),  // list initialization
b_(b),
c_(c),
d_(d)
{}
Matrix::Matrix(Matrix& m){      // A constructor/destructor donot have return statement.
    m.a_ = this->a_;        // It will work without this keyword but not recommended.
    m.b_ = this->b_;
    m.c_ = this->c_;
    m.d_ = this->d_;
}
int Matrix::det(){
    return a_*d_ - c_*b_;
}
bool Matrix::isSingular(){
    return !bool(a_*d_ - c_*b_);
}
void Matrix::print(){
    cout << "a_: " << a_ << ", b_: " << b_ << ", c_: " << c_ << ", and d_: "<< d_ << endl;
}


class Circle{
    private:
        float r_, x_, y_;
    public:
        Circle(float r=0, float x=0, float y=0);
        ~Circle() {};
        float Area();
        float Circumference();
        float radius();
        void center();
};
Circle::Circle(float r, float x, float y):
r_(r),
x_(x),
y_(y)
{}
float Circle::Area(){
    return PI * r_ * r_;
}
float Circle::Circumference(){
    return 2 * PI * r_;
}
float Circle::radius(){
    return this -> r_;
}
void Circle::center(){
    cout << "x and y : " << this -> x_ << " and " << this -> y_ << endl;
}

int main(){
    return 0;
}
// Default copy constructor makes a shallow copy
// In case of static allocattion default constructor is called by itself and in dynamic allocation we have to call it manually.

// Static function donot get their 'this' keyword and they can access only static data members.


///////////////////