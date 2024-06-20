#include<iostream>
using namespace std;

int electronic_shop(int key[], int n, int dri[], int m, int b){
    int ans{-1};
    for(int i{0} ; i<n; i++){
        for(int j{0}; j<m; j++){
            if((key[i]+dri[j])==b) return b;
            if((key[i]+dri[j]) < b && (key[i]+dri[j]) > ans){
                ans = (key[i]+dri[j]);
            }            
        }
    }
    return ans;
}
int main(){
    int b, n, m; cin >> b >> n >> m;
    int keyb[n], drives[m];
    for(int i{0}; i<n; i++) cin >> keyb[i];
    for(int i{0}; i<m; i++) cin >> drives[i];
    cout << electronic_shop(keyb,n,drives,m,b) << endl;
}