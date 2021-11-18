#include <iostream>
using namespace std;
// Napisz program, wyświetlający na ekranie znaki z klawiatury do momentu, aż zostanie podany znak „t”.
int main()
{
	char a;
	cout << "Wpisz znak z klawiatury: ";
	cin >> a;

	while (a != 't') {
		cin >> a;
	}
	cout << "koniec, dziekuje";



	return 0;
}




















