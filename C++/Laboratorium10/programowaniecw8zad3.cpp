#include <iostream>

#include <string>

using namespace std;

int main() 

{

int licznik = 1;

string str;

cout << "Podaj zdanie: " << endl;

getline(cin, str);

for (int i = 0; i < str.length(); i++)
{
    if (str[i] == ' ')
    {
        licznik+= 1;
    }
    
}

cout << licznik << endl;

}