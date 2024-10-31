#include<bits/stdc++.h>

using namespace std;

class Ratio{

    //// The function which have first argument as non- *this, are declared as friend,

    friend Ratio operator*(Ratio x, Ratio y);
    //// it has all the privileges of a member function without actually
    //// being a member of the class
    friend bool operator==(Ratio x, Ratio y);   //// We can define any relational operator using friend function.

    friend ostream& operator<<(ostream&, const Ratio&); /// ostream(defined in iostream.h) is defined in friend and all input pass by reference.

    friend istream& operator>>(istream&, const Ratio&);

    friend Ratio operator-(Ratio& x, Ratio& y);

    friend bool operator< (Ratio& x, Ratio& y);

    public:
    Ratio(int n=0, int d = 1): num(n), den(d){
        cout << "Constructor called! " << endl;
    }
    Ratio(const Ratio& r):num(r.num), den(r.den){
        cout << "Copy constructor is called!" << endl;
    }   /// copy constructor
    // void operator= (const Ratio&);   // doesn't help in chain assignments
    Ratio& operator=(const Ratio&);
    Ratio Product(Ratio x, Ratio y);
    // Ratio operator* (Ratio x, Ratio y);      /// This is not gonna work because "operator*" is not a member function, can't access to the member of class

    Ratio& operator*=(const Ratio&);


    /// type conversion member functions
    operator double () const;
    operator float ();

    /// increment/decrement operators
    Ratio& operator++();        /// prefix operator has one argu
    Ratio& operator++(int);        /// postfix operator, has two argu, in which one is dummy(the int);

    /// subscript overload
    int& operator[] (int);

    private:
    int num;
    int den;
};

// void Ratio::operator=(const Ratio& r){
//     num = r.num;
//     den = r.den;
// }
Ratio& Ratio::operator=(const Ratio& r){
    cout << "Assignment operator called!" << endl;
    num = r.num;
    den = r.den;
    return *this;   /// Without this You would lose the ability to chain assignment
}       /// this is Ratio*, pointer to self.

Ratio Ratio::Product(Ratio x, Ratio y){
    Ratio z(x.num*y.num, x.den*y.den);
    return z;
}

///  If in overloading of operator you require more than one argument, declare it as a friend function.
Ratio operator* (Ratio x, Ratio y){             //// Since Ratio is non member function, we don't need to define access specifiers for that like Ratio::
    Ratio z(x.num*y.num , x.den*y.den);
    return z;
}

Ratio& Ratio::operator*=(const Ratio& r){
    num*=r.num;
    den*=r.den;
    return *this;
}

bool operator==(Ratio x, Ratio y){
    return (x.num * y.den == x.den * y.num);
}
ostream& operator<<(ostream& ostr, const Ratio& r){
    return ostr << r.num << '/' << r.den << endl;
}
istream& operator>>(istream& istr, const Ratio& r){
    cout << "\tNumerator: "; istr >> r.num;
    cout << "\tDenominator: "; istr >> r.den;

    return istr;
}
Ratio::operator double() const{ // it is a member function hence, we need scope resolution operator
    return double(num)/den;     /// see return single argument to Ratio class jayega, thus denominator mein automatically 1 hoga
}
Ratio::operator float(){
    return float(num)/den;
}

Ratio& Ratio::operator++(){
    num+=den;
    return *this;
}
Ratio& Ratio::operator++(int){      /// int arg not named bcz don't need but req to distinguish from prefix
    num+=den;
    return *this;
}

int& Ratio::operator[](int i){      // it is an access function as it provides access to the private data members of function
    if(i==1) return num;
    return den;
}

Ratio operator-(Ratio &x, Ratio& y){
    Ratio z(x.num * y.den - x.den * y.num , x.den*y.den);
    return z;
}

bool operator<(Ratio& x, Ratio& y){
    return x.num*y.den < x.den *y.num;
}

int main(){
    Ratio x(22,7); // this is an initialization
    cout << endl << "--------------------------------------------------------" << endl;
    Ratio y(x); // this is an initialization --- copy constructor
    cout << endl << "--------------------------------------------------------" << endl;
    Ratio z = x; // this is an initialization --- copy constructor
    cout << endl << "--------------------------------------------------------" << endl;
    Ratio w, p;
    cout << endl << "--------------------------------------------------------" << endl;
    p = w = x; // this is an assignment
    ++x;
    cout << x;
    x++;
    cout << x;
    cout << x[1] << endl;
    cout << x[89] << endl;
    x[2] = 11;
    cout << x;
}