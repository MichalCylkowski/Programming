#include <iostream>

#include <string>

using namespace std;

int main() 

{

int licznik=0;

string str;

cout << "Podaj slowo niezawierajace polskich znakow: " << endl;

cin >> str;

for (int i = 0; i < str.length(); i++)
{
    if (str[i] == 'a' || str[i] ==  'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
    {
       licznik+= 1; 
    }
     
}

cout << licznik << endl;






}