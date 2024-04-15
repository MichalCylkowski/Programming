#include <iostream>

using namespace std;

double suma(double *tab, int n)
{
if (n == 0)
{
    return 0;
}

else
{
    return suma(tab + 1, n - 1)+*tab;
}

}

int main()
{

int n;

cout << "Podaj liczbe n: " << endl;

cin >> n;

double *tab=(double*)malloc(sizeof(double)*n);

for (int i = 0; i < n; i++)
{
    cout << "Podaj liczbe: ";

    cin >> *(tab+i);
}

cout << suma(tab, n) << endl;

















}