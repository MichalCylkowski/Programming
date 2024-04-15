#include <iostream>

using namespace std;

int main()
{
int n, pom;

cout << " Podaj rozmiar tablicy: " << endl;

cin >> n;

int tab[n];

for (int i = 0; i < n; i++)
{
    cout << "Podaj element do tablicy : " << endl;

    cin >> tab[i];
}

for (int j = 0; j < n - 1; j++)
{
    pom = j;

    for (int i = j + 1; i < n; i++)
    {
        if (tab[i] < tab[pom])
        {
            pom = i;
        }
        
    }

    swap(tab[j],tab[pom]);
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
    
}

cout << endl;

for (int j = 0; j < n - 1; j++)
{
    pom = j;

    for (int i = j + 1; i < n; i++)
    {
        if (tab[i] > tab[pom])
        {
            pom = i;
        }
        
    }

    swap(tab[j],tab[pom]);
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
    
}

cout << endl;

}