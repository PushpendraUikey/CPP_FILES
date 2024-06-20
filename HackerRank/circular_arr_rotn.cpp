#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k ,q; cin >> n >> k >> q;
    int ir;
    int arr[n], que[q];
    for(int i{0}; i<n; i++) cin >> arr[i];
    for(int i{0}; i<q; i++) cin >> que[i];

    int rotated[n];     // just create the new array, no need to shift the array in the same array, which is quite complicated.

    for(int i{0} ; i < n; i++){
        rotated[(i+k)%n] = arr[i];
    }
    for(int i{0}; i<q; i++) cout << rotated[que[i]] << endl;
}


// Just make more variables, learning of the question.