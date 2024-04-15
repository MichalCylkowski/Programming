#include <iostream>

#include <string>

using namespace std;

int trojkat(double a, double b, double c);

int sprawdz(double a, double b, double c);

int trojkat(double a, double b, double c) 

{

if (a + b > c && a + c > b && b +  c > a && sprawdz(a, b, c) == 1)
{
    return 1;
}

else return 0;

}

int sprawdz(double a, double b, double c)
{

if (a > 0 && b > 0 && c > 0)
{
    return 1;
}

else return 0;

}

int main ()
{

cout << trojkat(3, 4, 5) << endl;

}
