#include<iostream>
using namespace std;

// This algorithm works to bring all the elements of array to one side 
// In this case we are bringing all the elements of -ve sign to one side of arr.

// void quickSort(int A[], int k){
//     int j{0};
//     for(int i{0}; i<k; i++){
//         if(A[i] < 0){
//             if( i!=j )
//                 swap(A[j],A[i]);
//             j++;
//         }
//     }
// }


////////// Two pointer approach to bring all the -ve elements to one side

// void shiftAll(int A[], int n){
//     int l = 0, r = n-1; 
//     int lv, rv;
//     while(l<r){
//         lv = A[l];rv = A[r];
//         if(lv>=0 && rv<0){
//             swap(A[l],A[r]);
//             l++;
//             r--;
//         }
//         else if(lv<0 && rv<0){
//             l++;
//         }
//         else if(rv>=0){
//             r--;
//         }
//         else{
//             l++;
//         }
//     }
// }


///////////////////////// Using Ductch National Flag algorithm
// void reArrange(int a[], int n){
//     int l{0}, r = n-1;
//     while (r>l)
//     {
//         if(a[l]<0) l++;
//         else if(a[r]>0) r--;
//         else{
//             swap(a[l],a[r]);
//             r--;
//             l++;
//         } 
//     }
// }



////////////// Two Pass Approach
void reArrange(int a[], int n){
    int negCount {0};
    for(int i{0}; i<n; i++){
        if(a[i]<0) negCount++;
    }
    int i{0}, j=negCount;
    while(i<negCount && j<n){
        if(a[i]<0) i++;
        else if(a[j]>=0) j++;
        else{
            swap(a[i],a[j]);
            i++;
            j++;
        }
    }
}

int main(){
    int A[7] = {32, -44, 18, 0, -55, 13, -6};
    // quickSort(A,7);
    int arr[] = {-12, 0, -13, -5, 
               6, 0, 5, -3, 11};
    // shiftAll(A,7);
    // shiftAll(arr,9);
    reArrange(A,7);
    reArrange(arr,9);
    for(int i{0}; i<7; i++){
        cout << A[i] << ' ';
    }
    cout << endl;
    for(int i{0}; i<9; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}