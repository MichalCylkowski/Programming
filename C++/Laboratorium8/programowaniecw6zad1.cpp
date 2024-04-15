#include <iostream>
using namespace std;
int main() 
{

int n;

cout<<"Podaj liczbe elementow tablicy: "<<endl;

cin>>n;

int tab[n];

for (int i = 0; i < n; i++)
{

    cout<<"Podaj "<<i+1<<" element: ";

    cin>>tab[i];

}

for (int i = n-1; i >= 0; i--)
{
    cout<<tab[i]<<endl; 
}

return 0;



}