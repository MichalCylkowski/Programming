#include <iostream>

#include <string>

using namespace std;

double potegaIt(double a, int n)
{
    double wynik=1;
    for (int i = 0; i < n; i++)
    {
        wynik *=a;
    }
    return wynik;
}

double potegarek(double a, int n)
{

if (n == 0)
{
    return 0;
}

else return a*potegarek(a, n-1);





}
int main()
{

cout << potegaIt(6,2) << endl;

cout << potegarek(6,2) << endl;

return 0;








}