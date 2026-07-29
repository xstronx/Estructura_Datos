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

using namespace std;

class MCM{
	private:
		int a;
		int b;
		int c;
	public:
		MCM();
		void setA(int);//
		void setB(int);
		void setC(int);
		int getA();//
		int getB();
		int getC();
		int mcd(int,int);	
		int mcm(int,int,int);
			
};