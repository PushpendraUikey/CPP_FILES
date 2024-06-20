#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int cum{0}, p = 5, k{0};
    while(n--!=0){
        k = p/2;    // ceiling of half likes those advertisement
        cum += k;
        p = k*3;    // ceiling of half of each prisoner shares to 3 others
    }
    cout << cum << endl;
}