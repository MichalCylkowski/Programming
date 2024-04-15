#include <iostream>
using namespace std;
int liczba, suma = 0;
int main()
{
cout<<"Podawaj liczby do momentu az podasz 0: "<<endl;
cin>>liczba;
while (liczba != 0)
{
cout<<"Podawaj liczby do momentu az podasz 0: "<<endl;
suma+=liczba;
cin>>liczba;

}

cout<<"suma: "<<suma<<endl;








}