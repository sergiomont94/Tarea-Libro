#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "Ingrese un numero para determinar si es par o impar: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "El numero es par!" << endl;
	}
	else {
		cout << "El numero es impar!" << endl;
	}

	system("pause");
}