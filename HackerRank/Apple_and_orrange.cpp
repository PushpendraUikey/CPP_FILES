#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int s,t; cin >> s >> t;
    int a, b; cin >> a >> b;
    int m, n; cin >> m >> n;
    int Apple[m], Orange[n];
    for(int i{0}; i<m; i++){
        cin >> Apple[i];
    }
    for(int j{0}; j<n; j++){
        cin >> Orange[j];
    }
    int apple{0}, orange{0};
    for(int i{0}; i<m; i++){
        if((a+Apple[i])>=s && (a+Apple[i])<=t) apple++;
    }

    for(int i{0}; i<n; i++){
        if((b+Orange[i])>=s && (b+Orange[i])<=t) orange++;
    }
    cout << apple << endl << orange << endl;
}