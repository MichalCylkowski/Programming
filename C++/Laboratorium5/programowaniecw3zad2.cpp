#include <iostream>
using namespace std;
int liczba, wynik;
int main()
{
cout<<"Program wyswietla wartosc bezwzgledna liczby podanej przez uzytkownika."<<endl;
cout<<"Podaj dowolna liczbe calkowita: "<<endl;
cin>>liczba;

if (liczba<0)
{
    wynik=liczba*(-1);
    cout<<"Wartosc bezwzgledna to: "<<endl;
    cout<<wynik<<endl;
}

else
cout<<liczba;









}