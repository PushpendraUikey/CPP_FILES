#include<bits/stdc++.h>
#include "Date.h"
using namespace std;

////// Compostion is said if any class uses another classes as its data members.

/*
A subclass inherits all the public and protected members of its base class. This means
that, from the point of view of the subclass, the public and protected members of its base
class appear as though they actually were declared in the subclass.
*/

// class Person{       //// coposition of string class within Person class.

//     public:
//     Person(string n ="", string nat="", int sex =1): name(n), nationality(nat), sex(sex){
//         cout << "Person constructor called with sex : " << sex << endl;
//     }
//     ~Person(){}
//     void printName(){   cout << name << endl; }
//     void printNationality() { cout << nationality << endl; }
//     void setDOB(int m, int d, int y) { dob.setDate( m,  d, y);}
//     void setDOD(int m, int d, int y) { dod.setDate( m,  d, y);}

//     void printDOB() { cout << dob ;}
//     void printDOD() { cout << dod ;}
//     protected:
//     string name, nationality;
//     int sex;
//     Date dod, dob;  // birth and death day's ( composition it is )   
//     void setHSgraduate(int g) { hs = g; }
//     int isHSgraduate() { return hs; }
//     private:
//      int hs;
// };


// class Student : public Person
// { public:
// Student(string n, int s=0, string i="") : Person(n, "", s) {    //// If you don't call Person construtor here in list initializer, then default constructor of Person will be called.
//     // Person(n,"",s);
//     this -> id = i;
//     this -> credits = 0;
    
//     cout << "Student constructor called with a the sex : " << this -> sex << " " << s << endl;
//  }
// void setDOM(int m, int d, int y) { dom.setDate(m, d, y); }
// void printDOM() { cout << dom; }
// void printSex() {   cout << (sex ? "Male" : "Female") << endl; }
// protected:
// string id; // student identification number
// Date dom; // date of matriculation
// int credits; // course credits
// float gpa; // grade-point average
// };

// class X
// { public:
// void f() { cout << "X::f() executing\n"; }
// int a;
// };
// class Y : public X
// { public:
// void f() { cout << "Y::f() executing\n"; } // overrides X::f()
// int a; // dominates X::a
// };

// int main()
// { 
//     X x;
//     x.a = 22;
//     x.f();
//     cout << "x.a = " << x.a << endl;
//     Y y;
//     y.a = 44; // assigns 44 to the a defined in Y
//     y.X::a = 66; // assigns 66 to the a defined in X
//     y.f(); // invokes the f() defined in Y
//     y.X::f(); // invokes the f() defined in X
//     cout << "y.a = " << y.a << endl;
//     cout << "y.X::a = " << y.X::a << endl;
//             X z = y;            ////// Important !      copying instance of X from instance of Y
//     cout << "z.a = " << z.a << endl;
// }




/// @brief  Parent constructor executes first and Parent destructor executes last.
/// That's why If want to Initialise parent according to will, do it in list intialization, rather if you do it inside the block
/// then what happen will is that, default initialisation of parent will occur and the initialisation you do inside the block won't have 
/// any affect overall.

/// @brief The effect is that all the parent default constructors execute in top-down order.

/// @brief each destructor executes its own code before
/// calling its parent destructor. So all the parent destructors execute in bottom-up order.
// class X
// { public:
//     X() { cout << "X::X() constructor executing\n"; }
//     ~X() { cout << "X::X() destructor executing\n"; }
// };
// class Y : public X
// { public:
//     Y() { cout << "Y::Y() constructor executing\n"; }
//     ~Y() { cout << "Y::Y() destructor executing\n"; }
// };
// class Z : public Y
// { public:
//     Z(int n) { cout << "Z::Z(int) constructor executing\n"; }
//     ~Z() { cout << "Z::Z() destructor executing\n"; }
// };
// int main()
// { Z z(44);
// }




/// @brief  Always remember to take care of deallocation of dynamically allocated memory's to the 
/// variable, because many times multiple deallocation occurs due to errors.

// class Person
// { public:
// Person(const char* s)
// { name = new char[strlen(s)+1]; strcpy(name, s); }
// ~Person() { 
//     cout << "Person's destructor for " << name <<" is called! " << endl;
//     delete [] name;
// }
// protected:
// char* name;
// };
// class Student : public Person
// { public:
// Student(const char* s, const char* m) : Person(s)
// { major = new char[strlen(m)+1]; strcpy(major, m); }
// ~Student() { 
//     cout << "Student's destructor is called for major: " << major << endl;
//     delete [] major; 
//     }
// private:
// char* major;
// };
// int main()
// { Person x("Bob");
// { Student y("Sarah", "Biology");
// }
// }

//// objects of different types to respond
/// differently to the same function call. This is called polymorphism and it is achieved by means of
/// virtual functions. Polymorphism is rendered possible by the fact that a pointer to a base class
/// instance may also point to any subclass instance


// class X
// {   public:
//     void f() { cout << "X::f() executing\n"; }
// };
// class Y : public X
// {   public:
//     void f() { cout << "Y::f() executing\n"; }
//     void g() { cout << "Y::g() executing\n"; }
// };
// int main()
// {   
//     X x;
//     Y y;
//     X* p = &x;
//     p->f(); // invokes X::f() because p has type X*
//     p = &y;
//     p->f(); // invokes X::f() because p has type X*
//     // p->g();      /// can't access function g(), because p has type X*
// }

// class X
// {   public:
//     virtual void f() { cout << "X::f() executing\n"; }
// };
// class Y : public X
// {   public:
//     void f() { cout << "Y::f() executing\n"; }
//     void g() { cout << "Y::g() executing\n"; }
// };
// int main()
// {   
//     X x;
//     Y y;
//     X* p = &x;
//     p->f(); // invokes X::f() because p has type X*
//     p = &y;
//     p->f(); // invokes Y::f() because X::f() is set virtual function

//     // p->g();      /// can't access function g(), because p has type X*
// }

/*
This example illustrates polymorphism: the same call p->f() invokes different functions.
The function is selected according to which class of object p points to. This is called dynamic
binding because the association (i.e., binding) of the call to the actual code to be executed is
deferred until run time. The rule that the pointer’s statically defined type determines which mem-
ber function gets invoked is overruled by declaring the member function virtual
*/

class Person
{ public:
Person(string s) {  name = s; }

/// @brief  if function defined virtual, then any pointer bounds dynamically to this function.

virtual void print() { cout << "My name is " << name << ".\n"; }        //// without virtual always this code will get executed.
protected:
string name;
};
class Student : public Person
{ public:
Student(string s, float g) : Person(s), gpa(g) { }
void print()
{ cout << "My name is " << name << " and my G.P.A. is "
<< gpa << ".\n"; }
private:
float gpa;
};
class Professor : public Person
{ public:
Professor(string s, int n) : Person(s), publs(n) { }
void print()
{ cout << "My name is " << name
<< " and I have " << publs << " publications.\n"; }
private:
int publs;
};
int main()
{ Person* p;
Person x("Bob");
p = &x;
p->print();
Student y("Tom", 3.47);
p = &y;
p->print();
Professor z("Ann", 7);
p = &z;
p->print();
}