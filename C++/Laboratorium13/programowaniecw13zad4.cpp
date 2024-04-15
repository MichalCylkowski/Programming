#include <iostream>

#include <string>

using namespace std;

int liczba(string napis)
{

cout << "Podaj napis(liczbe): " << endl;

cin >> napis;

for (int i = 0; i < napis.length(); i++)
{
    char znak;

    znak = napis[i];

    if (znak > 10)
    {
        cout << (char)(znak);
    }
    
}

}

int main(int argc, char** argv)
{

string napis;

liczba(napis);

return 0;




}