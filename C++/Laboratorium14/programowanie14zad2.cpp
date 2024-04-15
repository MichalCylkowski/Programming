#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{

int a, b, c, x, x1, x2, wynik=0;

cout << "Podaj liczbe a: " << endl;

cin >> a;

cout << "Podaj liczbe b: " << endl;

cin >> b;

cout << "Podaj liczbe c: " << endl;

cin >> c;

int delta = b * b - 4 * a * c;

if (delta < 0)
{
    cout << "Brak pierwiastkow. " << endl;
}

else if (delta == 0)
{
    x = -b / 2 * a;

    cout << "x = " << x << endl;
}

else
{
    x1 = (-b - sqrt(delta)) / 2 * a;
    
    cout << "x1 = " << x1 << endl;

    x2 = (-b + sqrt(delta)) / 2 * a;

    cout << "x2 = " << x2 << endl;
}

return 0;









}
