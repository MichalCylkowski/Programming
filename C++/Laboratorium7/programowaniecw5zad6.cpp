#include <iostream>
using namespace std;
int main()
{
double n;
cout<<"Podaj wysokosc choinki: "<<endl;
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int a = 1; a <= n-i; a++)
    {
        cout<<" ";
    }
    for (int a = 1; a <= i*2-1; a++)
    {
       cout<<"*";
    }
    
    cout<<endl;
}
 for (int i = 1; i < n-1; i++)
 {
    cout<<" ";
 }
 cout<<"|_|"<<endl;
}