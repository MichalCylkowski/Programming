#include <iostream>

#include <string>

using namespace std;

int suma(int n)
{

if (n==0)
{
    return 0;
}
else 
{
    return n%10 + suma(n/10); 
}

}

int main()
{
int n;

cout << "Podaj liczbe n: " << endl;

cin >> n;

cout << suma(n) << endl;

}