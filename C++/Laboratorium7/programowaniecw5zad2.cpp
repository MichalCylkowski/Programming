#include <iostream>
using namespace std;
int main()
{
int a, asilnia=1;

cout<<"Podaj a: "<<endl;
cin>>a;
for (int i = 0; i < a; i++)
{
    asilnia = asilnia*(i+1);
}

cout<<"a!="<<asilnia<<endl;



}