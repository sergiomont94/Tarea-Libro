#include <iostream>
using namespace std;

int main() {

	int cont = 0;
	int mayor = 0;
	int menor = 10000;

	for (int x = 0; x < 5; x++) {
		cout << "Ingrese el numer: " << x + 1 << ": ";
		cin >> cont;

		if (cont < menor) {
			menor = cont;
		}

		if (cont > mayor) {
			mayor = cont;
		}
	}

	cout << "\n\nEl mayor de los numero es el: " << mayor << " y el menor es el: " << menor << endl;

	system("pause");
}