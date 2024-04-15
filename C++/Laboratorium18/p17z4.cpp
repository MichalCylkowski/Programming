#include <iostream>

#include <cstdlib>

using namespace std;

int sprawdzam(int *tab, int n, int k)
{
if (n == 0)
{
    return 1;
}

else if (k < *tab)
{
    return 0;
}

else if (k > *tab)
{
    return sprawdzam(tab + 1, n - 1, k);
}

}

int main(int argc, char** argv)
{

int n, k;

cout << "Podaj ilosc liczb calkowitych: " << endl;

cin >> n;

int *tab=(int*)malloc(sizeof(int)*n);

cout << "Podaj pierwsza liczbe: " << endl;

cin >> k;

for (int i = 0; i < n; i++)
{
    cout << "Podaj kolejna liczbe: " << endl;

    cin >> *(tab + i);
}

cout << sprawdzam(tab, n, k) << endl;

}


















    
}