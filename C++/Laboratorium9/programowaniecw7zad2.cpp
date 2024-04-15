#include <iostream>
using namespace std;
int main() 
{
int k, n, m;
cout<<"Podaj n nastepnie podaj m i nastepnie podaj k: "<<endl;
cin>>n>>m>>k;

int tab[n][m];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<"Podaj "<< i << ". "<< j <<  ". " << ". :";
        cin>>tab[i][j];
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<tab[i][j]*k <<" ";
    }
    cout<<endl;
}




}