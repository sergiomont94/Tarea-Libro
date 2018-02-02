#include <iostream>
using namespace std;

int main() {
	int num1, num2;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if (num1 > num2) {

		if (num1 % num2 == 0) {
			cout << "El numero: " << num1 << " es multiplo de " << num2 << endl;
		}
		else
			cout << "El numero" << num1 << " NO es multiple de " << num2 << endl;
	}
	else {
		if (num2 % num1 == 0) {
			cout << "El numero: " << num2 << " es multiplo de " << num1 << endl;
		}
		else
			cout << "El numero: " << num2 << " NO es multiple de " << num1 << endl;
	}
	system("pause");
}