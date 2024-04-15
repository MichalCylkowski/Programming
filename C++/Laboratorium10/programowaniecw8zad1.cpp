#include <iostream>

#include <string>

using namespace std;

int main() 

{

string str;

string str1;

cout << "Podaj 1 słowo: " << endl;

cin >> str;

cout << "Podaj 2 słowo: " << endl;

cin >> str1;

cout << endl;

cout << "Słowo w porządku leksykograficznym : " << endl;

if (str < str1)
{
    cout << str << endl;
}

else

cout << str1;

cout << endl;

cout << "Słowo dłuzsze: " << endl;

if (str.length() > str1.length())
{
    cout << str <<  endl;
}

else

cout << str1 << endl;

}