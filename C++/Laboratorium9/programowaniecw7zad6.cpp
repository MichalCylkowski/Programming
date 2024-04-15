#include <iostream>

using namespace std;

int main() 

{

int n, m;

cout << "Podaj ilosc wierszy tablicy: " << endl;

cin >> n;

cout << "Podaj ilosc kolumn tablicy: " << endl;

cin >> m;

int tab[n][m];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj liczby tablicy: " << endl;

        cin >> tab[i][j];
    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << tab[j][i] << " ";
    }
    
    cout << endl;
}

}