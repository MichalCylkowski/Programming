#include <iostream>

#include <string>

using namespace std;

int main() 

{

int x=0;

string str;

string str1;

string str2;

cout << "Podaj pierwsze slowo: " << endl;

cin >> str;

cout << "Podaj drugie slowo: " << endl;

cin >> str1;

if (str.length() > str1.length())
{
    for (int i = 0; i < str.length(); i++)
    {
        if (x < str1.length())
        {
            str2+=str[i];
            
            str2+=str1[i];

            x++;

        }
        else
        {

            str2+=str[i];

        }
    }
    
}

else 
{

for (int i = 0; i < str1.length(); i++)
{
    if (x < str.length())
    {
        str2+=str[i];
        str2+=str1[i];
        x++;

    }
    
    else 
    {
        str2+=str1[i];

    }
}

cout << str2;
}






}