#include <iostream>

using namespace std;

int main()

{
int n, m;

cout << "Podaj n: " << endl;

cin >> n;

cout << "Podaj m: " << endl;

cin >> m;

int tab[n][m];
int tab1[n][m];
cout << "Pierwsza tablica: " << endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj " << i << ". " << j <<  ". " << ". : ";
        
        cin >> tab[i][j];
    }
}
cout << "Druga tablica: " << endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << "Podaj " << i << ". " << j <<  ". " << ". : ";
        
        cin >> tab1[i][j];
    }
}


for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << tab[i][j]+tab1[i][j] << " ";
    }
    cout << endl;
}







}