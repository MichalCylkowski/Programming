#include <iostream>
using namespace std;
double a, b, c;
int main ()
{
cout<<"Podaj 3 liczby a, b oraz c: "<<endl;
cin>>a>>b>>c;

if (b*b-4*a*c<0)
{
    cout<<"Rownanie nie ma pierwiastkow."<<endl;
}

else if (b*b-4*a*c>0)
{
    cout<<"Rownanie zawiera 2 pierwiastki."<<endl;
}








}