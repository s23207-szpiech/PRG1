#include <iostream>
using namespace std;
// Napisz program, który wypisze na ekranie trójkąt Pascala. Liczba wierszy trójkąta ma być pobrana od użytkownika.

int main()
{
    int i, j, k, l, m;
    cout << "Podaj liczbe wierszy: ";
    cin >> l;
    cout << endl << endl;
    for (i = 0; i < l; i++) {
        m = 1;
        for (j = 0; j < l - 1 - i; j++) {
            cout << " ";

        }
        for (k = 0; k <= i; k++) {
            cout << " " << m;
            m = m * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl << endl;
    return 0;
}

