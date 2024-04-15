#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

int los(int a)
{
   return (rand()%a)+0;
}

int main(int argc, char** argv)
{

int a, b, c, d;

srand(time(0));

cout << "Podaj 1 wymiar tablicy: " << endl;

cin >> a;

cout << "Podaj 2 wymiar tablicy: " << endl;

cin >> b;

int tab[a][b];

for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        tab[i][j] = 0;
    }
    
}

for (int i = 0; i < 3; i++)
{
    c = los(a);

    d = los(b);

    tab[c][d] = 1;
}

for (int i = 0; i < a; i++)
{
   
   for (int j = 0; j < b; j++)
   {
    
    cout << tab[i][j];

   } 
   cout << endl;
}









}