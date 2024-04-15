#include <iostream>

using namespace std;

int main()
{
int n;

cout << "Podaj ilosc liczb calkowitych: " << endl;

cin >> n;

int *tab =(int*)malloc(sizeof(int)*n);

for (int i = 0; i < n; i++)
{
    cout << "Podaj kolejna liczbe: ";

    cin >> *(tab + i);
}

for (int i = 0; i < n; i++)
{
    if (*(tab + i)%2 != 0)
    {
        *(tab + i) = 0;
    }

    cout << *(tab + i) << " ";
    
}

}