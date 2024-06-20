#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, s, t, temp;
    cin >> t;
    vector<int> arr;
    while(t--!=0){
        cin >> n >> m >> s;
        temp = (m + s - 1) % n;     // Since here it is going through 1 based indexing, hence we are doing, minus one here.
        if(temp==0){
            arr.push_back(n);   // It came out to be zero bcz of modulo ope, but since one based indexing, it is actually the last person
        }else 
            arr.push_back(temp);
    }
    for(int e : arr){   // Loop through vector without knowing the size.
        cout << e << endl;
    }
}