#include <iostream>
using namespace std;
int a, wynik=0;
double b;
int main()
{
cout<<"Podaj dowolna liczbe calkowita: "<<endl;
cin>>a;

do
{
    b = a % 10;
    a = a / 10;
    if (b != 0 && int(b) % 2 != 0)
    {
       wynik+= 1;
    }
    

} while (abs(a)>0);
cout<<"wynik: "<<wynik<<endl;





}