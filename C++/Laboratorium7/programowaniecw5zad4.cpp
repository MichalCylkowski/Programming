#include <iostream>
using namespace std;
int main() 
{
int n;
cout<<"Podaj liczbe n: "<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
    for (int a = 0; a <= i; a++)
    {
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;
for (int i = 0; i < n; i++)
{
    for (int a = n; a > i; a--)
    {
        cout<<"*";
    }
    cout<<endl;
}















}