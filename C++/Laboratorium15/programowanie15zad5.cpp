#include <iostream>

#include <cmath>

using namespace std;

int main()
{
int n;

cout <<"Podaj n: " << endl;

cin >> n;

bool tab[n];

for (int i = 2; i <= n; i++)
{
    tab[i] = true;
}

for (size_t i = 2; i < sqrt(n); i++)
{
    if (tab[i])
    {
        for (int j = i*i; j <= n; j+= 1)
        {
            tab[j] = false;
        }
        
    }
    
}

for (int i = 2; i < n; i++)
{
    if (tab[i])
    {
        cout << i << " ";
    }
    
}





}