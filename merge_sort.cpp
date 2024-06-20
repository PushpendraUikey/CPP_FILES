#include<iostream>
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
		print(U,Lu); cout<<" and "; print(V,Lv);
		cout<<endl;
        
		for(int sb=0; sb<Lu+Lv; sb++) {
                if(uf<Lu && vf<Lv){                               // if elements remaining in both
                        if(U[uf] < V[vf]){
                            S[sb] = U[uf]; uf++;
                        }else{ 
                            S[sb] = V[vf]; vf++;
                        }
                }
                else if(uf < Lu) {                               // elements remaining in U only
                        S[sb] = U[uf]; uf++; 
                    }
                else {                                          // elements remainig in V only
                        S[sb] = V[vf]; vf++; 
                    }                
        }      
}

void mergesort(int S[], int n){
        if(n <= 1) return;
       
	    cout << "Call has been made to sort: "; print(S,n);  
    cout << endl;
        int p = n/2, q = n-n/2;
        int U[p], V[q];
        for( int i=0; i<p; i++)
                U[i] = S[i];
        for(int i=0; i<q; i++)
                V[i] = S[i+p];

        mergesort(U,p);
        mergesort(V,q);

        merge(U, p, V, q, S);
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
