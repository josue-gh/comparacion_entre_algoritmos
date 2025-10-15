#include<iostream> 
#include <algorithm>
using namespace std;

 
 
void cycle_sort(int A[], int n){
	
    int writes = 0;

    for (int inicio= 0; inicio <= n - 2; inicio++) {
        
        int item = A[inicio];
		int pos = inicio;
        
        for (int i = inicio + 1; i < n; i++){
            if (A[i] < item){
			
                pos++;
            }
    	}

        
        if (pos == inicio){
		
            continue;
        }

        
        while (item == A[pos]){
            pos += 1;
		}
		
        if (pos != inicio) {
            swap(item, A[pos]);
            writes++;
        }

        
        while (pos != inicio) {
            pos = inicio;

            
            for (int i = inicio + 1; i < n; i++){
			
                if (A[i] < item){
					pos += 1;
                }
			}
			
            
            while (item == A[pos]){
			
                pos += 1;
			}
            
            if (item != A[pos]) {
                swap(item, A[pos]);
                writes++;
            }
        }
    }

    // Number of memory writes or swaps
    // cout << writes << endl ;
}


int main(){
	
	int cant;
	cout<<"ingrese el tamano del arreglo "<<endl;
	cin>>cant;
	
	int arreglo[cant];
	
	cout<<"ingrese los elementos del arreglo: "<<endl;
	for(int i=0; i<cant; i++){
		cin>>arreglo[i];
	}
	
	
	cycle_sort(arreglo, cant);
	
	
	for(int i=0; i<cant; i++){
		cout<<arreglo[i]<<endl;
	}
}


