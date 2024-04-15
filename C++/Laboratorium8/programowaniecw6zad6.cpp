#include <iostream>
using namespace std;
int main()
{
int m, n, x;
cout<<"Podaj n: "<<endl;
cin>>n;

cout<<"Podaj m: "<<endl;
cin>>m;

int tab1[n], tab2[m];
for (int a = 0; a < n; a++)
{
    cout<<"Podaj kolejna liczbe pierwszej tablicy: "<<endl;
    cin>>x;
    tab1[a]=x;
}

for (int a = 0; a < m; a++)
{
    cout<<"Podaj kolejna liczbe drugiej tablicy: "<<endl;
    cin>>x;
    tab2[a]=x;
}

if (n >= m)
{
    for (int i = 0; i < n; i++)
    {
        for (int b = 0; b < m; b++)
        {
            if (tab1[i]==tab2[b])
            {
                cout<<tab1[i]<<" ";
            }
            
        }
        
    }
    
}
else
{
    for (int i = 0; i < m; i++)
    {
       for (int b = 0; b < n; b++)
       {
          if (tab2[i]==tab1[b])
          {
            cout<<tab2[i]<<" ";
          }
        
        }
    
    }

}




}