#include<iostream>
using namespace std;

// Need a lot of optimization

void sherlock(int n){
    int five{0}, three{0};
    for(int i{0}; i<=n; i+=3){
        for(int j{0}; j<=n; j+=5){
            if(i+j == n){
                five = i; 
                three = j;
            }
        }
    }
    if(five==0&&three==0) cout << -1 << endl;
    else {
        while((five--)>0){
            cout << 5;
        }
        while((three--)>0){
            cout << 3;
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    int a[t]; 
    for(int i{0}; i<t ; i++) cin >> a[i];
    for(int i{0}; i<t; i++){
        sherlock(a[i]);
    }
}

