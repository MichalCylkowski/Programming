#include <iostream>
using namespace std;
int main() 
{
int n;
cout<<"Podaj liczbe n: "<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
    for (int a = 0; a < n; a++)
    {
        if (a<=n-i-2)
        {
           cout<<" ";
        }
        else cout<<"*";
        
    }
    cout<<endl;
}
cout<<endl;
for (int i = 0; i < n; i++)
{
    for (int a = n; a > 0; a--)
    {
        if (a>=n-i+1)
        {
            cout<< " ";
        }
        else cout<<"*";
    }
    cout<<endl;
}
}