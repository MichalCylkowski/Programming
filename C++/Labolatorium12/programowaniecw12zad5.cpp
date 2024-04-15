#include <iostream>

#include <string>

using namespace std;

int wartosc(int n, int k)
{

if (k == 0)
{
    return 1;
}

if (n == k)
{
    return 1;
}

else 
{
   return wartosc(n-1, k)+wartosc(n-1, k-1);
}



}

int main()

{
int n, k;

cout << "Podaj liczbe n: " << endl;

cin >> n;

cout << "Podaj liczbe k: " << endl;

cin >> k;

cout <<wartosc(n,k)  << endl;


}