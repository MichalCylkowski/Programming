#include <iostream>

using namespace std;

int main()
{

int n, m;

cout << "Podaj n i m: " << endl;

cin >> n >> m;

int **macierz;

macierz = (int**)malloc(sizeof(int*)*n);

for (int i = 0; i < n; i++)
{
    *(macierz+i) = (int*)malloc(sizeof(int)*m);
}

cout << "Pierwsza macierz: " << endl;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj element do tablicy: " << endl;

        cin >> *(*(macierz+i)+j);
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << *(*(macierz+i)+j)  << " ";
    }
    cout << endl;
}


int **macierz1;

macierz1 = (int**)malloc(sizeof(int*)*n);

for (int i = 0; i < n; i++)
{
    *(macierz1+i) = (int*)malloc(sizeof(int)*m);
}

cout << "Druga macierz: " << endl;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj element do tablicy: " << endl;

        cin >> *(*(macierz1+i)+j);
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << *(*(macierz1+i)+j)  << " ";
    }
    cout << endl;
}

cout << endl;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << *(*(macierz1+i)+j) + *(*(macierz+i)+j)  << " ";
    }
    cout << endl;
}
}




