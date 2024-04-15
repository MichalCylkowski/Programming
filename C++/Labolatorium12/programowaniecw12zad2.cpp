#include <iostream>

#include <string>

using namespace std;

double silnia(int n)
{
if (n<0)
{
    return -1;
}

else if (n == 0 || n == 1)
{
    return 1;
}

else
{
 return n*silnia(n-1);
}

}

int main()
{
int n;

cout << "Podaj liczbe n: " << endl;

cin >> n;

cout << silnia(n) << endl;

}