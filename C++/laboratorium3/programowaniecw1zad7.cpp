#include <iostream>
using namespace std;
int a;
int a1;

int main() {
cout<<"Podaj pierwsza liczbe a: "<<endl;
cin>>a;

cout<<"Podaj druga liczbe a: "<<endl;
cin>>a1;

cout<<"Wartosc: "<<(a + a1)<<endl;
cout<<"Roznica: "<<(a-a1)<<endl;
cout<<"Iloczyn: "<<(a*a1)<<endl;
cout<<"Srednia: "<<((a+a1)/2)<<endl;
cout<<"Reszta z dzielenia: "<<(a%a1)<<endl;
cout<<"Procent: "<<((a/a1)*100)<<endl;


return 0;

}