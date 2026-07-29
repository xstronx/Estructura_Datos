#include <iostream>
#include "Sobrecarga.h"

using namespace std;

Sobrecarga_Datos::Sobrecarga_Datos(float i=0, float j=0): x(i), y(j){ }
bool operator||(Sobrecarga_Datos& p1, Sobrecarga_Datos& p2) {         
  if (p1.x > 0 && p1.y > 0) return true;
  if (p2.x > 0 && p2.y > 0) return true;
  return false;
}
void * operator new(size_t size)
{
    cout << "Sobrecarga de operador OR (||) "<< endl;
    void * p = malloc(size);
    return p;
}