#include<iostream>
#include<cassert>
#define NDEBUG
using namespace std;

unsigned long gcd(unsigned long m, unsigned long n){
	assert(m>=n);                    // Checking the conditions for it 
	while (n !=0 ){                  // true then proceed otherwise remain
		unsigned long r{m%n};    // there.
		m = n;
		n = r;
	}
	return m;
}
int main() {
	cout << "Hello World! " << endl;
	int  A[5];
cout << gcd(92389237,23892) << " "<< endl << gcd(233432323,232342)<< endl << gcd(0, 2389) << " "<< endl << gcd(34,232) << " "<< endl;
	cout << A[5] << endl;
}



