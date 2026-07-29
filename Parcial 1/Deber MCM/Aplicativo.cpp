/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
    
	ENUNCIADO: MCM            
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec 
				GABRIEL REINOSO - dgreinoso@espe.edu.ec
	FECHA_CREACION: 20/05/2022
	FECHA_MODIFICACION: 20/05/2022
	VERSION: 1.0
	NOMBRE_MATERIA: ESTRUCTURA DE DATOS
	NRC: 4683
	
	*/
#include <stdio.h>
#include <iostream>
#include "MCM.h"

using namespace std;

int maximo_comun_divisor(int a, int b) {
   /* int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }*/
    if(a==0){
    	return b;
	}
    return maximo_comun_divisor(b%a,a);
}

int minimo_comun_multiplo(int a, int b,int c) {
	int mcm1;
	mcm1=(a*b)/maximo_comun_divisor(a,b);
    return (mcm1 * c) / maximo_comun_divisor(mcm1, c);
}

int main(void) {
	int a, b,c;
	MCM mcm1;
	printf("Ingrese un numero:");
	scanf("%d",&a);
	printf("Ingrese un numero:");
	scanf("%d",&b);
	printf("Ingrese un numero:");
	scanf("%d",&c);
	mcm1.setA(a);
	mcm1.setB(b);
	mcm1.setC(c);
    printf("MCM de %d , %d y %d = %d\n", mcm1.getA(), mcm1.getB(), mcm1.getC(), mcm1.mcm(mcm1.getA(), mcm1.getB(), mcm1.getC()));
    return 0;
}