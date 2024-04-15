#include <iostream>

#include <string>

using namespace std;

int main () 

{
string str;

cout << "Podaj zdanie " << endl;

getline(cin, str);

for (int i = 0; i < str.length(); i++)
{
    if (str[i] == ' ')
    {
       str[i] = '\n';
    }
    
}

cout << str << endl;







}