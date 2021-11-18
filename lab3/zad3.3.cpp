#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/* Napisz program, który będzie rozwiązywał równanie kwadratowe:
a) Wypisze na konsolę, jaką postać ma równanie kwadratowe.
b) Pobierze od użytkownika liczby A, B i C.
c) Wypisze postać równania kwadratowego z uwzględnieniem wartości dla A, B i C.
d) Obliczy i wypisze pierwiastki równania */
int main()
{
	float a, b, c, delta;
	cout << "Rownanie kwadratowe ma postac \" Ax^2 + Bx + C = 0 \"" << endl << endl;
	cout << "Podaj liczby A, B i C oddzielone spacja: ";
	cin >> a >> b >> c;
	cout << endl << "Postac rownania kwadratowego dla podanych liczb to " << a << "x^2 + " << b << "x + " << c << " = 0" << endl << endl;
	delta = b*b - 4*a*c;
	cout << fixed << setprecision(2);
	if (delta > 0) {
		float x1, x2;
		x1 = (-b -sqrt(delta)) / 2 * a;
		x2 = (-b +sqrt(delta)) / 2 * a;

		cout << "Delta dla tego rownania jest dodatnia." << endl << endl;
		cout << "Pierwiastki dla tego rownania wynosza: x1 = " << x1 << "   x2 = " << x2 << endl;

	}
	else if (delta == 0) {
		float x;
		x = (-b) / (2 * a);
		cout << "Delta dla tego rownania jest rowna 0" << endl << endl;
		cout << "Pierwiastek dla tego rownania wynosi : x = " << x << endl;
	}
	else {
		cout << "Delta jest ujemna, rownanie nie ma rozwiazania" << endl;
	}
	return 0;
}