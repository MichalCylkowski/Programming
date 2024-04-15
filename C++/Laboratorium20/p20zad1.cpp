#include <iostream>

#include <fstream>

using namespace std;

int main()
{

ifstream plik;

int minimum, maximum;

plik.open("liczby.txt");

if (plik.is_open())
{
    int liczba;

    minimum = liczba;

while(!plik.eof())
{
plik >> liczba;

if (liczba < minimum)
{
    minimum = liczba;
}

else if (liczba > maximum)
{
    maximum = liczba;
}


}

}

cout << minimum << endl;

cout << maximum << endl;







}