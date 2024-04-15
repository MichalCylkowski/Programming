#include <iostream>

#include <math.h>

using namespace std;

struct point 
{
int odcieta;

int rzedna;

};

double odleglosc(point p1, point p2)
{

return sqrt(pow((p1.rzedna - p2.rzedna), 2) + pow((p1.odcieta - p2.odcieta), 2));

}
int main()
{
point point1;

point point2;

cout << "Podaj odcieta punktu pierwszego: " << endl;

cin >> point1.odcieta;

cout << "Podaj rzedna punktu pierwszego: " << endl;

cin >> point1.rzedna;

cout << "Podaj odcieta drugiego punktu: " << endl;

cin >> point2.odcieta;

cout << "Podaj rzedna drugiego punktu: " << endl;

cin >> point2.rzedna;

cout << odleglosc(point1, point2) << endl;

}