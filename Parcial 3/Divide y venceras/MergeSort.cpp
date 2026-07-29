#include<iostream>
using namespace std;

void merge(int A[],int l, int mid, int h){ 
//supongamos que A[] está dividido en 2 partes, una de l al medio y otra del medio al tope
int i=l,j=mid+1,k=l;
int B[100];
//i<=m (igual a mid) (tamaño de la primera lista en la fusión de 2 vías ) , j<=n (igual a h ) (tamaño de la segunda arreglo en la fusión de 2 vías )
while(i<=mid && j<=h){
if(A[i]<A[j]){ //A[i] es la primera lista y A[j] es la segunda lista, aquí copiamos el elemento más pequeño y lo colocamos en la lista combinada
B[k++]=A[i++]; 
}
else{
B[k++]=A[j++]; 	
}	
}
//cualquiera de los bucles for de abajo se ejecutará si el elemento thr queda en cualquiera de la lista entonces directamente se copiará después del elemento más pequeño
for(;i<=mid;i++){
B[k++]=A[i];	
}
for(;j<=h;j++){
B[k++]=A[j];	
}
//copiar la lista fusionada en la lista original
for(i=l;i<=h;i++){
	A[i]=B[i];
}
}
void mergesort(int A[],int l, int h){
	int mid;
	if(l<h){
		mid=(l+h)/2;
		mergesort(A,l,mid); //list 1
		mergesort(A,mid+1,h); // list 2
		merge(A,l,mid,h);
	}
}

int main(){
	int A[100],n;
	cout<<"Ingrese la dimension del arreglo : ";
	cin>>n;
	cout<<"Ingrese los elementos: "<<endl;
	for(int i=0;i<n;i++){
	cin>>A[i];
	}
	mergesort(A,0,n-1);
	for(int i=0;i<n;i++){
	cout<<A[i]<<" ";
	}
		
}