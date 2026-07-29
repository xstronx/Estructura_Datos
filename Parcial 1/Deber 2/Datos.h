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
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;


class Datos{
	private:
	string dato;
	public:
		
		Datos();
		void set_Dato(string);
		string get_Dato();
		string ingresarDatosEnteros(string);
		int TransInt(string);
		float TransFloat(string);
		void TransChar(string);
};