#include <iostream>

#include <string>

using namespace std;

string reverse(string a)
{
string b;

for (int i = a.length()-1; i >= 0; i--)
{
    b+=a[i];
}

return b;


}

int main()

{
string a;

cout << "Podaj wyraz: " <<endl;

cin >> a;

cout << reverse(a) << endl;

return 0;



}