#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

void ciag (int a)
{

srand(time(0));

for (int i = 0; i < a; i++)
{
    cout << char((rand()%126) + 33);
}

}

int main(int argc, char** argv)
{

int a;

cout << "Podaj a: " << endl;

cin >> a;

ciag(a);

}