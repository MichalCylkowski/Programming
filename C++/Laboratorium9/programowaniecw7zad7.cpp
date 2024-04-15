#include <iostream>

using namespace std;

int main() 

{
int n, suma;

cout << " Podaj n: " << endl;

cin >> n;

int tab[n][n];

int suma1 = 0;
int suma2 = 0;



for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
         cout << "Podaj " << i << ". " << j <<  ". " << ". : ";
        
         cin >> tab[i][j];
    }
    
}

for (int i = 0; i < n; i++)
{
  
        suma1 += tab[i][i];

        suma2 += tab[i][n-i-1];
    
}

if (n % 2 == 0)
{
    suma = suma1 + suma2;

    cout << suma;

}

else 
{

for (int i = 0; i < n; i++)
{
    suma2 = suma2 - tab[i][n-i-1];
    suma = suma1 + suma2;
    cout << suma;
}

}

}