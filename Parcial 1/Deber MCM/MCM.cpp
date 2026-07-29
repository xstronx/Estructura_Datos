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
#include <iostream>
#include "MCM.h"

using namespace std;

MCM::MCM(){
	
}

void MCM::setA(int num){
	a=num;
}

int MCM::getA(){
	return a;
}

void MCM::setB(int numero){
	b=numero;
}

int MCM::getB(){
	return b;
}

void MCM::setC(int number){
	c=number;
}

int MCM::getC(){
	return c;
}

int MCM::mcd(int num1,int num2){
	
	if(num1==0){
    	return num2;
	}
    return mcd(num2%num1,num1);
	
}

int MCM::mcm(int x, int y, int z){
	int mcm1;
	mcm1=(x*y)/mcd(x,y);
    return (mcm1 * z) / mcd(mcm1, z);
}