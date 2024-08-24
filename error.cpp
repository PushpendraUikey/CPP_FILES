#include<iostream>
#include<cassert>
#include<stack>
#define NDEBUG
using namespace std;

// unsigned long gcd(unsigned long m, unsigned long n){
// 	assert(m>=n);                    // Checking the conditions for it 
// 	while (n !=0 ){                  // true then proceed otherwise remain
// 		unsigned long r{m%n};    // there.
// 		m = n;
// 		n = r;
// 	}
// 	return m;
// }
// int main() {
// 	cout << "Hello World! " << endl;
// 	int  A[5];
// cout << gcd(92389237,23892) << " "<< endl << gcd(233432323,232342)<< endl << gcd(0, 2389) << " "<< endl << gcd(34,232) << " "<< endl;
// 	cout << A[5] << endl;
// }

// int main(){
// 	stack<int> st;
// 	cout << "Size and Capacity : " << st.size();
// }


//  #include <vector>
//  #include<chrono>

// //  #include "rdtsc.h"
//  using namespace std; // unclear!! STOP ME!
//  int local_vector(size_t N) {
//  vector<int> bigarray; //initially empty vector
//  //Fill vector up to length N
//  for(unsigned int k = 0; k<N; ++k)
//  bigarray.push_back(k);
//  //Find the max value in the vector
//  int max = 0;
//  for(unsigned int k = 0; k<N; ++k) {
//  if( bigarray[k] > max )
//  max = bigarray[k];
//  }
//  return max;
//  } 

//  // call local_vector M times
//  int test_local_vector( size_t M, size_t N ) {
//  unsigned sum = 0;
//  for(unsigned int j = 0; j < M; ++j ) {
//  sum = sum + local_vector( N );
//  }
//  return sum;
//  }
//  //In total, 3MN memory operations

//   int main() {
// //  ClockCounter t; // counts elapsed cycles
//  size_t MN = 4*32*32*32*32*16;
//  size_t N = 4;
//  while( N <= MN ) {
// //  t.start();
// auto start = chrono::high_resolution_clock::now();
//  test_local_vector( MN/N , N );
// auto stop = chrono::high_resolution_clock::now();

// auto diff = chrono::duration_cast<chrono::milliseconds> (stop - start);
// //  double diff = t.stop();
//  //print average time for 3 memory operations
//  std::cout << "N = " << N << " : " << diff.count() << " miliseconds" << endl;
//  N = N*32;
//  }
//  }


//  class Node {
//  public:
//  Node() : value(0) { }
//  const Node& foo( const Node* x) const {
//  value = 3;
//  // Not allowed because of ______________
//  x[0].value = 4;
//  return x[0];
//  }
//  int value;
//  // Not allowed because of ______________
//  };
//  int main() {
//  Node x[3], y;
//  auto& z = y.foo(x);
//  z.value = 5; // Not allowed because of ______________
//  }


#include<memory>
// int main(){
//   shared_ptr<int> p1(new int(4));
//   cout << p1.use_count() << endl;

//   shared_ptr<int> p2 = p1;
//   cout << p2.use_count() << endl;
//   cout << *p2 << endl;
//   int x;
// }

// int main(){
//   unique_ptr<int> ptr(new int(4));
//   unique_ptr<int> pt = ptr; // error 
// }

// int main(){
//   shared_ptr<int> pt(new int(4));
//   cout << pt.use_count() << endl;
//   weak_ptr<int> p2 = pt;
//   cout << pt.use_count() << endl;
//   cout << *pt << endl;
//   cout << p2.use_count() << endl;
//   // cout << *p2 << endl;  THis is an error
// }


/////////// CYCLE
// class B;
// class A{
//   public:
//     shared_ptr<B> sp1;
//     A() {cout << "A() " << endl;}
//     ~A() { cout << "~A() " << endl; }
// };

// class B{
//   public:
//     shared_ptr<A> sp1;
//     B() { cout << "B() " << endl; }
//     ~B() { cout << "~B() " << endl;}
// };


// int main(){
//   shared_ptr<A> aPtr(new A);
//   shared_ptr<B> bPtr(new B);

//   aPtr -> sp1 = bPtr;
//   bPtr -> sp1 = aPtr;

//   cout << aPtr.use_count() << endl;
//   cout << bPtr.use_count() << endl;
// }



//////////// Throwing an exception example!


// int foo(int x) {
//  try{
//  throw 20; // something has gone wrong!!
//  }
//  catch (int e){ // type of e is matched!
//  cout << "An int exception occurred. " << e << '\n';
//  }
//  return 0;
//  }

// int main(){
//   int x = 0;
//   foo(x);

// }


#include<vector>
#include<stack>

void solution(int *arr, int n, vector<int>& sol){
    stack<int> st;
    int cont = 0;

    for(int i=0; i<n ; i++){
        if(st.empty()){
            st.push(arr[i]);
            sol[i] = 1;
            cont = 1;
            continue;
        }

        if(arr[i] >= st.top()){
            st.pop();
            st.push(arr[i]);
            cont++;
            sol[i] = cont;
        }else{
            st.pop();
            st.push(arr[i]);
            cont = 1;
            sol[i] = cont;
        }
    }
}
