#include <iostream>

#include <string>

using namespace std;

int main()

{

string str;

int x=0;

bool palindrom=true;

cout << "Podaj slowo: " << endl;

cin >> str;

string tab1[str.length()], tab2[str.length()];

for (int i = 0; i < str.length(); i++)
{
    tab1[i]=str[i];
}

for (int i = str.length()-1; i >= 0; i--)
{
    tab2[x]=str[i];
    
    x++;
}

for (int i = 0; i < str.length(); i++)
{
    if (tab1[i] != tab2[i])
    {
        palindrom=false;
    }
    
}

if (palindrom == true)
{
    cout << "Slowo jest palindromem";
}

else

cout << "Slowo nie jest palindromem";




}