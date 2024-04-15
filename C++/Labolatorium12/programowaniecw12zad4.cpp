#include <iostream>

#include <string>

using namespace std;

int ciag(int n)
{

if (n==1)
{
    return 1;
}

else if (n==2)
{
    return 1;
}

else return ciag(n-1) + ciag(n-2);





}

int main()

{
int n;

cout << "Podaj liczbe n: " << endl;

cin >> n;

cout <<ciag(n)  << endl;


}