#include <iostream>

using namespace std;

int main()
{
int n, pom, x;

cout << " Podaj rozmiar tablicy: " << endl;

cin >> n;

int tab[n];

for (int i = 0; i < n; i++)
{
    cout << "Podaj element do tablicy : " << endl;

    cin >> tab[i];
}

for (int j = 1; j < n; j++)
{
    pom = tab[j];

    x = j - 1;

    while (x >= 0 && pom < tab[x])
    {
        tab[x + 1] = tab[x];

        x-= 1;

    }

    tab[x + 1] = pom;
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
    
}

cout << endl;

for (int j = 1; j < n; j++)
{
    pom = tab[j];

    x = j - 1;

    while (x >= 0 && pom > tab[x])
    {
        tab[x + 1] = tab[x];

        x-= 1;

    }

    tab[x + 1] = pom;
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
    
}

cout << endl;



}