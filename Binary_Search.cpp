#include<iostream>
using namespace std;


// Algorithm to search for index of element in a sorted array.
// non-decreasing ordered array,

int binary_search(int a[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }else if(a[mid]>key){
            end = mid - 1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int a[6] = {1,12,23,34,45,56};
    int b[9] = {0,1,2,3,4,5,6,7,8};
    cout << binary_search(a,6,11)<< endl;
    cout << binary_search(b,9,4)<< endl;
}