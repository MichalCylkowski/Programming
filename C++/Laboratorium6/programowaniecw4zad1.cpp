#include <iostream>
using namespace std;
int main () 
{
string a;
start:
cout<<"Czy lubisz programować ? odpowiedz t lub n."<<endl;
cin>>a;

while (a == "n")
{
    goto start;
}

}