#include <iostream>

#include <string>

using namespace std;

void mnozenie(double a, double n)
{
for (int i = 1; i <= n; i++)
{
    
   cout << i <<" "<<"*" <<" "<< a << " = " << a*i << endl; 
    
}

}

int main(int argc, char** argv)

{

int a;

int n;

cout << "Podaj a: " << endl;

cin >> a;

cout << "Podaj n: " << endl;

cin >> n;

mnozenie(a,n);


}