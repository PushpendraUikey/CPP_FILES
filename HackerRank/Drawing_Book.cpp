#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n , p; cin >> n >> p ;
    int first = p/2; int last = (n-p + (p%2))/2;
    first < last ? cout << first << endl : cout << last << endl;
}