#include <iostream>

using namespace std;

int main()
{
int n, m;

cout << "Podaj n i m: " << endl;

cin >> n >> m;

int **macierz1;

macierz1 = (int**)malloc(sizeof(int*)*n);

for (int i = 0; i < n; i++)
{
    *(macierz1+i) = (int*)malloc(sizeof(int)*m);
}
    
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj element do tablicy: " << endl;

        cin >> *(*(macierz1+i)+j);
    }
}


for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << *(*(macierz1+j)+i) << " ";
    }
    cout << endl;

}





}