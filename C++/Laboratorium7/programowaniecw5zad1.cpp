#include <iostream>
using namespace std;
int main ()
{
int n, x=0;
double suma=0;    
cout<<"Podaj z ilu liczb chcesz obliczyc srednia: "<<endl;
cin>>n;

for (int a = 0; a < n; a++)
{
   cout<<"podaj kolejna liczbe: "<<endl;
   cin>>x;
   suma+=x;
}

cout<<"srednia: "<<suma/n<<endl;






}