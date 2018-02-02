#include <iostream>
using namespace std;

int main() {
	int ventas = 0;

	while (ventas != -1) {
		cout << "Ingrese las ventas en dolares o ingresar -1 para salir: ";
		cin >> ventas;

		if (ventas == -1)
			break;

		cout << "El salario es $" << 200 + (ventas*0.09) << endl;
		cout << "" << endl;
	}
	system("pause");
}