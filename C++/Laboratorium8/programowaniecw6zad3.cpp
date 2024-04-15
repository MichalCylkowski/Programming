#include <iostream>
using namespace std;
int main ()
{

int n, suma;
cout<<"Podaj n: "<<endl;
cin>>n;

int tab[n];

for (int i = 0; i < n; i++)
{
    cout<<"Podaj "<<i+1<<" element: "<<endl;
    cin>>tab[i];
    
    if (i % 2 == 0)
{
    suma+= tab[i];
}

}

cout<<suma-1<<endl;





}