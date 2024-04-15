#include <iostream>
using namespace std;
int main()
{
int n, x, wynik=0;
cout<<"Podaj n: "<<endl;
cin>>n;

int tab1[n][n], tab2[n][n];
for (int a = 0; a < n; a++)
{
    for ( int b = 0; b < n; b++)
    {
        cout<<"Podaj kolejna liczbe: "<<endl;
        cin>>x;
        tab1[a][b]=x;
    }
    
}
for (int a = 0; a < n; a++)
{
   for (int b = 0; b < n; b++)
   {
        cout<<"Podaj kolejna liczbe: "<<endl;
        cin>>x;
        tab2[a][b]=x;
   }
   
}
for (int a = 0; a < n; a++)
{
    for (int b = 0; b < n; b++)
    {
        wynik+=tab1[a][b]*tab2[a][b];
    }
    
}
cout<<wynik;
return 0;

}