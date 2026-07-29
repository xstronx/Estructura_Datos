#include <iostream>
#include <stdlib.h>
#include "Sobrecarga.h"

int main(int argc, char** argv) {
  Sobrecarga_Datos p1(0,2);
  Sobrecarga_Datos p3 = Sobrecarga_Datos(1,2);
   int n = 5, i;
   int * p = new int[3];

	if(p3 || p1){
		cout << "p3 o p1 pertenece al primer cuadrante.\n";
	}      
    else {
    	 cout << "p3 o p1 no pertenece al primer cuadrante.\n";
	} 
	
	cout << "Sobrecarga operador new. \n";
	for (i = 0; i<n; i++)
    p[i]= i;
 
    cout << "Array: ";
    for(i = 0; i<n; i++)
        cout << p[i] << " ";
         
    cout << endl;
    
	return 0;
	
}
