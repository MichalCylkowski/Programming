#include <iostream>
using namespace std;
int main () 
{
    double a;
    double b;
cout<<"Podaj dwie liczby: "<<endl;
cin>>a>>b;

while ( a != b)
{
    if (a > b)
    {
        a-=b;
    }
     
    else
     {
    b-=a;
    }
}
   
cout<<"Nwd wynosi: "<<a<<endl;





}