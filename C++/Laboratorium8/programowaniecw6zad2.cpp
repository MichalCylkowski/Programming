#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Podaj n: "<<endl;
cin>>n;

int tab[n];

for (int i = 0; i < n; i++)
{
    cout<<"Podaj "<<i+1<<" element: "<<endl;
    cin>>tab[i];

}

for (int i = 0; i < n; i++)
{
if (i%5==0)
    {
        cout<<endl;
    }
     cout<<tab[i]<<" ";
}

cout<<endl;
return 0;








}