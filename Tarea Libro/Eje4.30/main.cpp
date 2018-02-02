#include <iostream>

using namespace std;

int main() {
	double radio;

	cout << "Ingrese el radio del circulo: ";
	cin >> radio;

	double diametro = radio * 2;
	double circunferencia = diametro * 3.14159;
	double area = 3.14159 * (radio * radio);

	
	cout << "Radio: " << radio << endl;
	cout << "Diametro: " << diametro << endl;
	cout << "Circunferencia: " << circunferencia << endl;
	cout << "Area: " << area << endl;

	system("pause");
}