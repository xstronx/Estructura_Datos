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
#include "Datos.h"


using namespace std;

Datos::Datos(){
}
void Datos::set_Dato(string newDatoS){
	dato=newDatoS;
}
string Datos::get_Dato(){
	return dato;
}

string Datos::ingresarDatosEnteros(string msg){
	char *cdato=new char[10];
	char c;
	int i=0;
	//int valor;
	cout<<msg;
	while((c=getch())!=13){
		if(c>='0' && c<='9' || c=='.'){
			printf("%c",c);
			cdato[i++]=c;
		}
	}
	cdato[i]='\0';
	string dato(cdato); 
	return dato;
}

int Datos::TransInt(string num){
	int nDato;
try{
		nDato=stoi(num);
		return nDato;
	}
	catch(exception e){
		cout<<"No se pude transformar la cadena a entero"<<endl;
	}
	
}

float Datos::TransFloat(string num){
		float nDato;
		try{
			nDato=stof(num);
			return nDato;
		}catch(exception e){
			cout<<"No se pude transformar la cadena a entero"<<endl;
		}
	}
void Datos::TransChar(string num){
	int n= num.length();
	char char_array[n + 1];
	strcpy(char_array, num.c_str());
	
	for (int i = 0; i < n; i++)
        cout << char_array[i];
}