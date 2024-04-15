#include <iostream>
using namespace std;
int main()
{
int x, n, i=0;

cout<<"Podaj liczbe w systemie dziesietnym: "<<endl;
cin>>n;

int tab[n];
while (n>0)
{
    x=n%8;
    n=n/8;
    tab[i]=x;
    i++;
}
for (int a = i-1; a != -1; a--)
{
    cout<<tab[a];
}









}