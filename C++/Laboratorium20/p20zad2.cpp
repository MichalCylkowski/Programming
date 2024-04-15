#include <iostream>

#include <fstream>

using namespace std;

int main()
{
int n;

cout <<"Podaj ilosc liczb: " << endl;

cin >> n;

int tab[n];

for (int i = 0; i < n; i++)
{
    cout << "Podaj" << " " << i + 1<< " " << "element" << " " << "tablicy" << endl;

    cin >> tab[i];
}

ofstream plik;

ofstream plik2;

plik.open("parzyste.txt");

plik2.open("nieparzyste.txt");

if (plik.is_open() && plik2.is_open())
{
    for (int i = 0; i < n; i++)
    {
        if (tab[i]%2 == 0)
        {
            plik << tab[i];
        }
        
        else
        {
            plik2 << tab[i];
        }
    }
    
}

plik.close();

plik2.close();

















}