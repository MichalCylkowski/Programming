#include <iostream>
using namespace std;
int liczba;
int main() 
{
cout<<"Program pobiera od uzytkownika liczbe calkowita oraz okresla czy jest ona parzysta."<<endl;
cout<<"Podaj liczbe calkowita: "<<endl;
cin>>liczba;

if (liczba%2==0)
{
   cout<<"Liczba jest parzysta"<<endl;

}

else
cout<<"Liczba nie jest parzysta"<<endl;


return 0;


}