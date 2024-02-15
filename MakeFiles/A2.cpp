#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int st=0,end=n;
    while(end!=st){
        int mid=(st)+(end-st)/2;
        if(a[mid]<k){
            st=mid;
        }
        else{
            end=mid;
        }
    }
    if(a[st]!=k){
        cout<<st<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
