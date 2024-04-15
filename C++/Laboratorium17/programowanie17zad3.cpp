#include <iostream>

using namespace std;

void zamiana(int* x, int* y)
{
int pom;

pom = *x;

*x = *y;

*y = pom;

}

int main()
{
int x, y;

x = 2;

y = 3;

zamiana(&x, &y);

cout << x << ", " << y << endl;









}