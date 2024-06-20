#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<vector<int>> arr, query;
    while(n-->0){
        int k; cin >> k;
        int j;
        vector<int> temparr;
        for(int i{0}; i<k; i++){
            cin >> j;
            temparr.push_back(j);
        }
        arr.push_back(temparr);
    }
    while(q-->0){
        int q1,q2; 
        vector<int> temparr;
        cin >> q1 >> q2;
        temparr.push_back(q1);
        temparr.push_back(q2);
        query.push_back(temparr);
    }
    for(int i{0}; i<query.size(); i++){
        int a = query[i][0];
        int b = query[i][1];
        cout << arr[a][b] << endl;
    }
}