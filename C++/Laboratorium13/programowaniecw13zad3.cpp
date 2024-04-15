#include <iostream>

using namespace std;

string zamiana (string a)
{
string slowo;

for (int i = 0; i < a.length(); i++)
{
   if (a[i] > 64 && a[i] < 90)
   {
    slowo+= a[i]+32;
   }
    else 
    {
        slowo+= a[i];
    }
}   

return slowo;

}

int main() 

{

string a;

cout <<"Podaj a: " << endl;

cin >> a;

cout << zamiana(a) << endl;



}