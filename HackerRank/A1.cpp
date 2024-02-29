#include<iostream>

using namespace std;

void grade_allot(int n[], int k);

int main(){
    int n; cin >> n;
    int grade[n];
    for(int i{0}; i<n; i++){
        cin >> grade[i];
    }
    grade_allot(grade,n);
}

void grade_allot(int grade[], int n){
    for(int j{0}; j<n; j++){
        if(grade[j]<=40){
            cout << grade[j] << endl;
        }
        else{
            int k{grade[j]/5};
            int m{(k+1)*5-grade[j]};
            if(m<3) cout << (k+1)*5 << endl;
            else cout << grade[j] << endl;
        }
    }
}