#include <iostream>
#include <cmath>
using namespace std;
void Triangulo(){
    float b = 0;
    float h = 0;
cout << "Ingrese la base:\n";
cin >> b;
cout << "Ingrese la altura:\n";
cin >> h;
cout << "El area del triangulo es de: " << (b*h) / 2 << "cm\n";
system("pause");
}
void Rectangulo(){
 float l = 0;
    float a = 0;
cout << "Ingrese el largo:\n";
cin >> l;
cout << "Ingrese el ancho:\n";
cin >> a;
cout << "El area del rectangulo es de: " << (l*a) << "cm\n";
system("pause");
}
void Cuadrado(){
 float l = 0;
cout << "Ingrese el valor del lado:\n";
cin >> l;
cout << "El area del cuadrado es de: " << pow(l, 2) << "cm\n"; //AL CUADRADO
system("pause");
}

void Circulo(){
 float r = 0;
cout << "Ingrese el valor del radio:\n";
cin >> r;
cout << "El area del cuadrado es de: " << pow(r, 2) << endl; //AL CUADRADO
system("pause");
}

int main(){
    char select;
cout << "** Figuras geometricas **\n1) Triangulo\n2) Rectangulo\n3) Circulo\n4) Cuadrado\nIngrese un numero\n";
cin >> select;
switch (select)
{
case '1':
   Triangulo();
    break;
case '2':
   Rectangulo();
    break;
case '3':
   Circulo();
    break;
case '4':
   Cuadrado();
    break;
}
system("pause");
}