// Array a sequence of objects, all of which have the same data type.
#include<iostream>
#include<cmath>
#include<climits>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;
// Array cannot be moved to another place in memory.
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

int main() {
    const int SIZE = 4;
    float a[] = {22.2, 44.4, 66.6};
    float x = 11.1;
    cout <<"x : "<< x << endl;
    a[3] = 88.8;
    cout << "x = " << x << endl;
}

float Sum(float [],int);
int main() {
    float a[] = {12, 234, 283, 744, 292};
    int Size{sizeof(a)/sizeof(float)};
    cout << "Sum of the array's element's are " << Sum(a,Size) << endl;
}

float Sum(float a[],int Size){
    float sum{0}; 
    for(int i{0}; i<Size; i++){
        sum+=a[i];
    }
    return sum;
}

void read(int[],int&);
 void print(int[],int);
 const int MAXSIZE=100;
 int main() { 
    int a[MAXSIZE]={0}, size;    // all the elements gets initialized to zero
    read(a,size);
    cout << "The array has " << size << " elements: ";
    print(a,size);
 }
 void read(int a[], int& n) { 
    cout << "Enter integers. Terminate with 0:\n";
    n = 0;
    do
    { cout << "a[" << n << "]: ";
        cin >> a[n];
    } while (a[n++] != 0 && n < MAXSIZE);  // see it is using the index n and simultaneously increasing it by one.
    --n; // don't count the 0
 }
 void print(int a[], int n)
 { for (int i=0; i<n; i++)
 cout << a[i] << " ";
 }
 

// printing the memory address of the variable 
int main(){
    int a[]={82,23,4,33,26,54,52,15};
    cout << "Address of a is "<< a << endl;
}

// Linear Search algorithm
int Index(int,int[],int); 
int main(){
    int a[]={23,894,213,279,992,38,779,379,635}, size{sizeof(a)/sizeof(int)};
    cout << "Index(894,a,size) is " << Index(894,a,size) << endl;
    cout << "Index(89,a,size) is " << Index(89,a, size) << endl;
}
int Index(int n, int a[], int size){
    for(int j{0}; j<size; j++){
        if(a[j] == n) return j;
    }    
    return -1;
}

//one of the sorting algorithm in ascending order
int maxindex(int[],int);
int main(){
    int a[]={12,14,15,16,17,223,23,24,25,26,226,90,88,898,345,283}, size{sizeof(a)/sizeof(int)};
    for(int i{size-1};i>=0;i--){
        int maxpose = maxindex(a,i);
        int maxval = a[maxpose];
        a[maxpose] = a[i];
        a[i] = maxval;
    }    
    for(int i{0}; i<size; i++){
        cout << a[i] << ' ' ;
    }
    cout << endl;
}
int maxindex(int a[],int n){
    int maxval{a[0]},index{0};
    for(int i{0};i<=n; i++){
        if(a[i]>maxval){
            maxval = a[i];
            index=i;
        }
    }
    return index;
}

// Bubble sort algorithm
void swap(int&,int&);
void sort(int[],int);
int main(){
    int a[]={12,14,15,16,17,223,23,24,25,26,226,90,88,898,345,283}, size{sizeof(a)/sizeof(int)};
    sort(a,size);
    cout <<"Sorted array is : ";
    for(int i{0}; i<size; i++){
        cout << a[i] << ' ' ;
    }
    cout << endl;
}
void swap(int &a, int &b){
    int temp = b;
    b = a; 
    a = temp;
}
void sort(int a[], int n){
    for(int i{1}; i<n; i++)
        for(int j{0}; j<n-i;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);  // Pushing the maximum value to the end of the array.
        }
}

// Binary search, it works on the sorted array only! 
int Binary_Search(int, int[],int);
int main(){
    int a[]={12, 14, 15, 16, 17, 23, 24, 25, 26, 88, 90, 223, 226, 283, 345, 898}, size{sizeof(a)/sizeof(int)};
    cout << "Index of 90 " << Binary_Search(90,a,size) << endl;
    cout << "Index of 225 " << Binary_Search(225,a,size)<< endl;
}
int Binary_Search(int n, int a[],int size){
    int L{0},R{size};
    int mid{(L+R)/2};
    while(L != mid){
        if(a[L]==n) return L;
        if(a[mid]>n){
            R = mid;
            mid = (R+L)/2;
        }
        else{
            L = mid;
            mid = (L+R)/2;
        }
    }
    return -1;
}

// Binary with assert function
bool isNonDecreasing(int[],int);
int Binary_Search(int, int[],int);
int main(){
    int a[]={12, 14, 15, 16, 17, 23, 24, 25, 26,89, 88, 90, 223, 226, 283, 345, 898}, size{sizeof(a)/sizeof(int)};
    assert(isNonDecreasing(a,size));
    cout << "Index of 90: " << Binary_Search(90,a,size) << endl;
    cout << "Index of 225: " << Binary_Search(225,a,size)<< endl;
}
bool isNonDecreasing(int a[], int n){
    for(int i{1}; i<n;  i++){
        if(a[i]<a[i-1]) return false;
    }
    return true;
}
int Binary_Search(int n, int a[],int size){
    int L{0},R{size};
    int mid{(L+R)/2};
    while(L != mid){
        if(a[L]==n) return L;
        if(a[mid]>n){
            R = mid;
            mid = (R+L)/2;
        }
        else{
            L = mid;
            mid = (L+R)/2;
        }
    }
    return -1;
}

// Using enum in arrays 
int main(){
    enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
    float High[Sat+1]={83,84,85,86,87,88,89};
    for(int i = Sun; i<=Sat; i++){
        cout <<"Highest temperature of the " << i <<"day was " << High[i] << endl;
    }
}

int main(){
    enum Color{Violet, Indigo , Blue, Green, Yellow,Orange, Red};
    Color shirt = Blue;
    Color Car[Green+1]={Violet,Indigo, Blue, Green};
    float Wavelength[Red+1]={89,90,92,93,94,95,96};
    cout << shirt << ' '<< Car[Indigo]<<' ' << Wavelength[Green]<< endl;
}

//using typedef 
typedef long Integer;
typedef double Real;
int main(){
    Real pi = 3.14579861861476817;
    Integer frequency[9]={0};
    cout << pi << endl;
    cout << frequency[7] << endl;
}

typedef float Sequence[];
void Print(Sequence, int);
void Sort(Sequence, int);
int main(){
    Sequence a = { 23, 43.2, 233.34, 43.323,4327.53234}; int Size{sizeof(a)/sizeof(float)};
    Print(a,Size);
    Sort(a,Size);
    Print(a,Size);
}
void Print(Sequence a,int n){
    for(int i{0};i<n; i++){
        cout << a[i] << ' '; 
    }
    cout<< endl;
}
void Sort(Sequence a, int n){
    for(int k{1}; k<n; k++)
        for(int j{0}; j<n-k; j++){
            if(a[j]>a[j+1]){
                float temp{a[j]};
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
}

void Read(int a[][5], int n);
void Print(int a[][5], int n);
int main(){
    int n; cin >> n; int a[n][5];
    Read(a,n);
    Print(a,n);
}
void Print(int a[][5], int n){
    for(int i{0}; i<n; i++){
        cout << "Row " << i <<": ";
        for(int j{0}; j<5; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
void Read(int a[][5], int n){
    for(int i{0}; i<n; i++){
        cout << "Row " << i <<": ";
        for(int j{0}; j<5; j++){
            cin >> a[i][j];
        }
    }
}
*/
