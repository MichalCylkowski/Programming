#include <iostream>

#include <cstdlib>

using namespace std;

int zamiana(int *tab, int n)
{

if (*tab%2!=0)
{
    *tab = 0;
}

else if (n != 0)
{
    return zamiana(tab + 1, n - 1);
}

}

int main()
{

int n;

cout << "Podaj ilosc liczb calkowitych: " << endl;

cin >> n;

int *tab=(int*)malloc(sizeof(int)*n);

for (int i = 0; i < n; i++)
{
    cout << "Podaj kolejna liczbe: " << endl;

    cin >> *(tab + i);
}

cout << zamiana(tab, n);

for (int i = 0; i < n; i++)
{
    cout << *(tab + i) << " ";
} 








}