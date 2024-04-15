#include <iostream>
#include <math.h>
using namespace std;

int main(){

	float a, b, r;
	cout << "Podaj wspolczynniki prostej a oraz b: " << endl;

	cin>>a>>b;
	cout << "Podaj promien okregu: " << endl;

	cin >> r;


	float j = a * a +1;

	float k = 2 * a * b;

	float l = b*b - r*r;

	float delta = k*k - 4*j*l;

	if (delta < 0) 
    {
		cout << "Prosta nie ma punktow wspolnych z okregiem."<<endl;
	}

	else if (delta == 0) 
    {
		cout << "Prosta jest styczna do okregu."<<endl;
	}

	else if (delta > 0) 
    {
        cout << "Prosta przecina okrag w dwoch punktach."<<endl;  
    }

	

}