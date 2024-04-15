#include <iostream>

using namespace std;

int main()
{
int pom;

int n;

int tab[n];

cout << " Podaj n: " << endl;

cin >> n;

for (int i = 0; i < n; i++)
{
    cout << "Podaj element do tablicy : " << endl;

    cin >> tab[i];
}

{for (int j = n-1; j >= 1; j--)



    for (int i = 0; i < j; i++)
    {
     if (tab[i] > tab[i+1])
     {
        
        pom = tab[i];
        
        tab[i] = tab[i+ 1];

        tab[i + 1] = pom;

     }
    }
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
    
}

cout << endl;

{for (int j = n-1; j >= 1; j--)



    for (int i = 0; i < j; i++)
    {
     if (tab[i] < tab[i+1])
     {
        
        pom = tab[i];
        
        tab[i] = tab[i+ 1];

        tab[i + 1] = pom;

     }
    }
    
}

for (int i = 0; i < n; i++)
{
    cout << tab[i] << " ";
}

cout << endl;






}