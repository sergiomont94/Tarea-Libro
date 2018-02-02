#include <iostream>
using namespace std;

int main() {
	double km;
	double litro;

	double totalL = 0;
	double totalK = 0;

	do {
		cout << "Ingrese los kilometros usados (-1 para salir): " <<endl;
		cin >> km;

		if (km == -1) {
			break;
		}

		cout << "Ingrese los litros: ";
		cin >> litro;

		totalL += litro;
		totalK += km;

		cout << "KPL en este reabastecimiento: " << km / litro << endl;
		cout << "Total KPL: " << totalK / totalL << endl;

	} while (km != -1);

	system("pause");
}