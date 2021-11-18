#include <iostream>
#include <iomanip>
using namespace std;
/* Napisz program, który oblicza sumę, różnicę, iloczyn i iloraz dla
dwóch liczb x i y wprowadzanych z klawiatury. W programie
przyjmujemy, że liczby x i y są typu float (rzeczywistego). Dla
zmiennych x, y suma, różnica, iloczyn i iloraz należy przyjąć
format wyświetlania ich na ekranie z dokładnością do dwóch
miejsc po kropce. */
int main()
{
	float x, y;
	cout << "Podaj pierwsza liczbe : ";
	cin >> x;
	cout << "Podaj druga liczbe: ";
	cin >> y;

	cout << fixed << setprecision(2);

	cout << endl << "Podano liczby x = " << x << " oraz y = " << y << endl;

	cout << endl << "Suma liczb x i y = " << x + y << endl;

	cout << endl << "Roznica liczb x i y = " << x - y << endl;

	cout << endl << "Iloczyn liczb x i y = " << x * y << endl;
	
	cout << endl << "Iloraz liczb x i y = " << x / y << endl;



	return 0;
}
