#include<iostream>
using namespace std;

class Date
{ friend istream& operator>>(istream&, Date&);
friend ostream& operator<<(ostream&, const Date&);
public:
Date(int m=0, int d=0, int y=0) : month(m), day(d), year(y) { }
void setDate(int m, int d, int y) { month = m; day = d; year = y; }
private:
int month, day, year;
};
istream& operator>>(istream& in, Date& x)
{ in >> x.month >> x.day >> x.year;
return in;
}
ostream& operator<<(ostream& out, const Date& x)
{ static string monthName[13] = {"", "January","February",
"March", "April", "May", "June", "July", "August",
"September", "October", "November", "December"};
out << monthName[x.month] << ' ' << x.day << ", " << x.year;
return out;
}