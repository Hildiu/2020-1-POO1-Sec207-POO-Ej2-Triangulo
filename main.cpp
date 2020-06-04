//-- Dato de entrada: l1,l2,l3 (double)
//--Dato de salida  : area, perimetro (double)

#include <iostream>
#include "CTriangulo.h"
using namespace std;

int main()
{
  tnumero lado1,lado2,lado3;
do {
  cout << "Lado 1 : ";
  cin >> lado1;
  cout << "Lado 2 : ";
  cin >> lado2;
  cout << "Lado 3 : ";
  cin >> lado3;
}while( ! ((lado1+lado2>lado3) and (lado2+lado3>lado1) and (lado3+lado1>lado2)));

  CTriangulo T1(lado1, lado2, lado3);

  cout << "El area es   : " << T1.area() << "\n";
  cout << "El perimetro : " << T1.perimetro();

  cout << "\nCreamos un segundo objeto \n";
  CTriangulo T2;  //-- invocamos al constructor por defecto

  T2.setl1(45);
  T2.setl2(77);
  T2.setl3(34);
  cout << "El area es : " << T2.area() << "\n";
  cout << "El perimetro es : " << T2.perimetro() << "\n";

  //--- crear un objeto dinámico
  cout << "\n\nAhora creamos un objeto dinamico \n";

  CTriangulo *pObjeto= nullptr;

  pObjeto = new CTriangulo(45,77,90);
  cout << "El area es : " << pObjeto->area() << "\n";
  cout << "El perimetro es : " <<  (*pObjeto).perimetro() << "\n";
  delete pObjeto;
  pObjeto= nullptr;

  return 0;
}

