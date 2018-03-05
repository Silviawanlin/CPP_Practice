#include "head.h"

void display(int n){
    int i,m,j,k;
    for( i=0;i<n;i++){
         for(m=0; m<n-i; m++) 
            cout << " ";
        for(k=1; k<=i; k++) 
            cout << k; 
         for(j=i+1; j>0; j--)
            cout << j;
        cout << endl;
    }
}