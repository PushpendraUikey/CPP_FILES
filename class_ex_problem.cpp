#include<iostream>
#include<cstdlib>
#include<cmath>

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
            cout << x << ', ' << y << ', ' << z << endl;
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

class Stack
{ public:
Stack(int s=10) : size(s), top(-1) { a = new int[size]; }   // Dynamic allocation
~Stack() { delete [] a; }           // free up the memory
void push(const int& item) { a[++top] = item; }     // push into the array
int pop() { return a[top--]; }      // remove from the array
bool isEmpty() const { return top == -1; }  
bool isFull() const { return top == (size-1); }
private:
int size; // size of array
int top; // top of stack
int* a; // array to hold stack items
};

class Random
{
private:
    /* data */
    int n;
public:
    Random(int r = NULL): n(r){};
    ~Random();
    int random();
};
int Random::random(){
    srand(n);
    int r = rand();
    return r;
}
