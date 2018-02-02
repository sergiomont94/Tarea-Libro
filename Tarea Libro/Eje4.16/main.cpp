#include<iostream>
using namespace std;

int main() {
	int horas = 0;
	double sueldo = 0;
	double normal = 0;
	double extra = 0;

	while (horas != -1) {
		cout << "Ingrese las horas trabajadas o -1 para salir: ";
		cin >> horas;

		if (horas == -1) {
			break;
		}

		cout << "Ingresa la tarifa por hora del empleado ($00.00): ";
		cin >> sueldo;

		if (horas <= 40) {
			normal = horas * sueldo;
		}
		else {
			normal = 40 * sueldo;
			extra = (horas - 40) * (sueldo / 2);
		}

		cout << "El salario es $" << normal + extra << endl;
		cout << endl;

	}
	system("pause");
}