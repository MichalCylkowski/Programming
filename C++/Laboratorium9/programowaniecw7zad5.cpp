#include <iostream>

using namespace std;

int main() 

{

int n, m, suma=0, max=0, licznik = 0;

cout << "Podaj n i m: "<<endl;
cin >>n >> m;

double tab[n][m];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << " Podaj liczbe do tablicy: ";
        cin >> tab[i][j];    
    }
    
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        suma+=tab[i][j]; 
    }
    
    if (i == 0)
    {
       max=suma;
       licznik=0; 
    }
    
    else if (suma > max)
    {
        max = suma;
        licznik = i;
    }
    suma = 0;
    
}

cout << "Numer wiersza to: " << licznik<<endl;









}