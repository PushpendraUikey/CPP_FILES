#include<iostream>
#include<cmath>

using namespace std;

int migratory_bird(int[], int);
int find_occurance(int,int,int,int,int);
int main(){
    int n; cin >> n;
    int Arr[n];
    for(int i{0}; i<n; i++){
        cin >> Arr[i];
    }
    cout << migratory_bird(Arr, n);
}
int find_occurance(int one, int two, int three, int four, int five){
    int count{0}, num{0}; 
    if(one>=two){
        count=one;
        num = 1;
    }
    else{
        count = two;
        num = 2;
    }
    if(count < three){
        count = three;
        num = 3;
    }
    if(count < four){
        count = four;
        num = 4;
    }
    if(count < five){
        count = five;
        num = 5;
    }
    return num;
}
int migratory_bird(int A[], int n){
    int one{0}, two{0}, three{0}, four{0}, five{0};
    for(int i{0}; i<n; i++){
        if(A[i]==1) one++;
        else if(A[i] == 2) two++;
        else if(A[i] == 3) three++;
        else if(A[i] == 4) four++ ;
        else if(A[i] == 5) five++;
    }
    return find_occurance(one, two, three, four, five);
}