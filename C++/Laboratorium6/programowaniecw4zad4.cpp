#include <iostream>
using namespace std;
int main() 
{
int n;
int m = 1;
int suma = 0;
cout<<" Podaj n: "<<endl;
cin>>n;
while (suma <= n)
{
    suma = suma + m;
    m = m + 1;
}
cout<<m - 2<<endl;

}