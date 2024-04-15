#include <iostream>
using namespace std;
int main() 
{
int n;
double x, najwieksza=0, najmniejsza=0;
cout<<"Podaj n: "<<endl;
cin>>n;
double tab[n];
for (int a = 0; a < n; a++)
{
    cout<<"Podaj kolejna liczbe: "<<endl;
    cin>>x;
    tab[a]=x;
}
najwieksza=tab[0];
najmniejsza=tab[0];
for (int i = 0; i < n; i++)
{
    if (tab[i] > najwieksza)
    {
        najwieksza = tab[i];
    }
    else if (tab[i] < najmniejsza)
    {
        najmniejsza = tab[i];
    }
    
}
cout<<"Najwieksza: "<<najwieksza<<endl;
cout<<"Najmniejsza: "<<najmniejsza<<endl;











}