#include <iostream>

using namespace std;

class Sobrecarga_Datos{
	private:
		float x,y;
	public:
	Sobrecarga_Datos(float, float);
	friend bool operator||(Sobrecarga_Datos& p1, Sobrecarga_Datos& p2);	
	void * operator new(size_t size);	
};
