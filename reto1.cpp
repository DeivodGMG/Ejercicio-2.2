#include <iostream>
using namespace std;
/*void Excedio(a){

}*/
void LaFuncion(int a) {
if (a > 500000){
    cout << "Inversion de la empresa: $" << a * 0.55 << endl;
    cout << "Prestamo al Banco: $" << a * 0.30 << endl;
    cout << "Credito al fabricante $" << a * 0.25 << endl;
}else
cout << "Inversion de la empresa: $" << a * 0.70 << endl;
    cout << "Credito al fabricante $" << a * 0.50 << endl;
}
int main()
{
	float n;
	cout << "** Reto 1 ** " << endl;
	cout << "Ingres el monto:" << endl;
	cin >> n;
	cout << "-------------------------------" << endl;
	cout << "** Resultados **"<< endl;
LaFuncion(n);
	return 0;
}