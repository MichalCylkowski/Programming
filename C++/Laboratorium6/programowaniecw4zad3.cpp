#include <iostream>
using namespace std;

int main()
{
int k=10;
int m=50;
    while (k != 0)
 {
    if (k < 5)
    {
        k = k - 1;
        m = m + k;
    }
    else
    {
    k = k - 2;
    m = m - k;
    }

 }
cout<<m<<endl;


}