#include <iostream>

using namespace std;

int wyszukiwanie(int n, int tab[n], int k )
{

int lewo = 0;

int prawo = n;

int srodek = 0;

while (lewo < prawo)
{
    srodek = (lewo + prawo)/2;

    if (tab[srodek] < k)
    {
        lewo = srodek + 1;
    }
    
    else
    {
        prawo = srodek;
    }
}

if (tab[lewo] == k)
{
    return lewo;
}

else
{
    return -1;
}

}

int search(int lewo, int prawo, int k)
{

if (lewo < prawo)
{
    return -1;
}

int srodek = (lewo + prawo)/2;

if (srodek == k)
{
    return srodek;
}

}

int main()
{
int n, k;

int tab[n];

cout << "Podaj rozmiar tablicy: " << endl;

cin >> n;

cout <<"Podaj szukany element: " << endl;

cin >> k;

for (int i = 0; i < n; i++)
{
    cout << "Podaj element do tablicy : " << endl;

    cin >> tab[i];
}

cout << wyszukiwanie(n, tab, k);

}