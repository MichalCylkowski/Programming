#include <iostream>
using namespace std;
int main()
{
int a, wynik=0, b, potega=0;
cout<<"Podaj liczbe w systemie dwojkowym: "<<endl;
cin>>a;
do
{
    b = a % 10;
    a = a/10;
    if (potega == 0)
    {
        wynik+= b*1;
        potega+= 1;
    }
    else 
    {
        for(int x=0;x<potega;x++)
        {
            b*=2;
        }
        potega+= 1;
        wynik+= b;
    }
    
} while (a>0);

cout<<"wynik: "<<wynik<<endl;

    
}