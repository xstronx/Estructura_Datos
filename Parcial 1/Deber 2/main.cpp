/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
    
	ENUNCIADO: Conversion de string en float, entero y char.            
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec 
				GABRIEL REINOSO - dgreinoso@espe.edu.ec
	FECHA_CREACION: 12/05/2022
	FECHA_MODIFICACION: 12/05/2022
	VERSION: 1.0
	NOMBRE_MATERIA: ESTRUCTURA DE DATOS
	NRC: 4683
	
	*/
#include <iostream>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Datos.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Datos dato1;
    dato1.set_Dato(dato1.ingresarDatosEnteros("Ingrese una cadena:"));
	cout<<endl<<"TRANSFORMACION A ENTERO"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<dato1.TransInt(dato1.get_Dato())*2;
	cout<<endl<<"TRANSFORMACION A FLOAT"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<dato1.TransFloat(dato1.get_Dato())*2;
	cout<<endl<<"TRANSFORMACION A CHAR"<<endl;
	cout<<"-----------------------"<<endl;
	dato1.TransChar(dato1.get_Dato());
	return 0;
}