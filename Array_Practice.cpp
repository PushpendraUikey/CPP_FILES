// Array a sequence of objects, all of which have the same data type.
#include<iostream>
#include<cmath>
#include<climits>
#include<cctype>
#include<cstdlib>

using namespace std;
/*
int main(){
    const int SIZE = 5;
    double a[SIZE];             // Initialization_1
    cout << "Enter " << SIZE << " numbers." << endl;
    for(int i{SIZE-1}; i>=0; i--){
        cin >> a[i];
    }
    cout << "Reverse of the sequence is: ";
    for(int i{0}; i < SIZE; i ++){
        cout << a[i] << ' ';
    }
    cout << sizeof(a);
    cout << endl;
}
int main(){
    float a[] = {22.2, 44.4, 66.6};        // Initialization_2
    int size = sizeof(a)/sizeof(float);
    for(int i{0}; i<size; i++)
        cout << "\ta["<<i<<"] = "<<a[i] << endl;
}
int main(){
    float a[7] = {22.2, 44.4, 66.6};        // Initialization_3
    int size = sizeof(a)/sizeof(float);      // Zeroed out 
    for(int i{0}; i<size; i++)
        cout << "\ta["<<i<<"] = "<<a[i] << endl;
}
int main(){
    const int SIZE = 4;
    float a[SIZE];
    for(int i{0}; i<SIZE; i++)
        cout << "\ta["<< i << "] = "<< a[i] << endl;
}
*/
int main() {
    const int SIZE = 4;
    float a[] = {22.2, 44.4, 66.6};
    float x = 11.1;
    cout <<"x : "<< x << endl;
    a[3] = 88.8;
    cout << "x = " << x << endl;
}


// Bank 
// Adhar 
// 