#include <iostream>

using namespace std;

int main() 

{
int n, m;
cout<<" Podaj n a nastepnie podaj m: "<<endl;
cin>>n>>m;

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
    for (int j = m - 1 ; j >= 0; j--)
    {
       cout<< tab[i][j] << " ";
    }
    cout<<endl;
}









}