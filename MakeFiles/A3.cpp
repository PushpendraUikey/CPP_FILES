#include<iostream>
#include<cmath>
using namespace std;

void print(int A[], int n){        
        for(int i=0; i< n; i++){            // To see the call made to
                cout<<A[i]<<' ';
        }
        cout << endl;
}

void merge(int U[], int Lu, int V[], int Lv, int S[]) {              // Algo merge two sequences.
        int uf=0, vf=0;
		cout<<"Merging ";
		print(U,Lu); cout<<"    and "; print(V,Lv);
		cout<<endl;
        
		for(int sb=0; sb<Lu+Lv; sb++) {
                if(uf<Lu && vf<Lv){                               // if elements remaining in both
                        if(U[uf] < V[vf]){
                                S[sb] = U[uf]; uf++;}
                        else { S[sb] = V[vf]; vf++;}
                }
                else if(uf < Lu) {                               // elements remaining in U only
                        S[sb] = U[uf]; uf++; }
                else {
                        S[sb] = V[vf]; vf++; }                // elements remainig in V only
        }      
}

void mergesort(int S[], int n){
        if(n <= 1) return;
       
	    cout << "Call has been made to sort: "; print(S,n);  
    cout << endl;

        int U[n/2], V[n-n/2];
        for( int i=0; i<n/2; i++)
                U[i] = S[i];
        for(int i=0; i<n-n/2; i++)
                V[i] = S[i+n/2];

        mergesort(U,n/2);
        mergesort(V,n/2);

        merge(U, n/2, V, n-n/2, S);
}


int main() {
	const int k = 10; int Arr[k];
	for(int i=0; i<k; i++){
		cin >> Arr[i];
	}
	mergesort(Arr,k);

	cout << "Sorted Array is : ";
	for(int i=0; i<k; i++){
		cout << Arr[i] <<' ';
	}
	cout << endl;
}
