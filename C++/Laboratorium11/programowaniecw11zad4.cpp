#include <iostream>

#include <string>

using namespace std;

int nww(int a, int b)

{

int x=1;

while (x<=a*b)
{
    if (x%a==0)
    {
        if (x%b==0)
        {
            return x;
        }
        else 
        {
             x++;
        }
    }
    else 
    {
             x++;
    }
}

}

int main () 

{

int a,b;

cout << "Podaj liczbe a: " << endl;

cin >> a;

cout << "Podaj liczbe b: " << endl;

cin >> b;

cout << nww(a,b) << endl;

return 0;






}