#include<iostream>
#include<cmath>
using namespace std;

int* recordCalculate(const long [], int );

int main(){
    int n; cin >> n;
    long arr[n];
    for (int k{0}; k<n; k++){
        cin >> arr[k];
    }
    int * recordResult=recordCalculate(arr,n);
    cout << recordResult[0] << ' '<< recordResult[1] << endl;
    delete[] recordResult;
}

int * recordCalculate(const long arr[], int n){
    // Dynamically allocate memory for result
    int* result = new int[2]; 
    
    int max{0}, min{0};
    long maxScore=arr[0], minscore=arr[0];
    for(int i{1}; i<n; i++){
        if(arr[i] > maxScore){
            maxScore=arr[i];
            max++;
        }
        if(arr[i] < minscore){
            minscore=arr[i];
            min++;
        }

    }
    result[0]=max;
    result[1]=min;
    return result;
}