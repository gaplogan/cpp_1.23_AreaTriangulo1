#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    double b, h, area;
            
    cout << "Digite o valor da base: ";
    cin >> b;
    // Garante base positiva.
    b = abs(b);

    cout << "Digite o valor da altura: ";
    cin >> h;
    // Garante altura positiva.
    h = abs(h);

    // F�rmula da �rea do tri�ngulo
    area = (b * h) / 2;

    cout << "\n�rea do tri�ngulo: " << area << endl;

    return 0;
}