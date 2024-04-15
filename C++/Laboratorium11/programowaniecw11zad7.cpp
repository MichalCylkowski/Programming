#include <iostream>

#include <string>

using namespace std;

void menu()

{
   cout << "0: wyjscie" << endl << "1: dodawanie" << endl << "2: odejmowanie" << endl << "3: mnozenie" << endl << "4: dzielenie" << endl;
}

double dodawanie(double a, double b)
{
    return a+b;
}

double odejmowanie(double a, double b)
{
    return a-b;
}

double mnozenie(double a, double b)
{
    return a*b;
}

double dzielenie(double a, double b)
{
    return a/b;
}

void wynik(char numer)
{

double a, b;

switch (numer)
{
case '0':
    break;

case '1':

cout << "Podaj pierwsza liczbe: " << endl;

cin >> a;

cout << "Podaj druga liczbe: " << endl;

cin >> b;

cout << "Wynik: " << dodawanie(a,b) << endl;

break;

case '2':

cout << "Podaj pierwsza liczbe: " << endl;

cin >> a;

cout << "Podaj druga liczbe: " << endl;

cin >> b;

cout << "Wynik: " << odejmowanie(a,b) << endl;

break;

case '3':

cout << "Podaj pierwsza liczbe: " << endl;

cin >> a;

cout << "Podaj druga liczbe: " << endl;

cin >> b;

cout << "Wynik: " << mnozenie(a,b) << endl;

break;

case '4':

cout << "Podaj pierwsza liczbe: " << endl;

cin >> a;

cout << "Podaj druga liczbe: " << endl;

cin >> b;

cout << "Wynik: " << dzielenie(a,b) << endl;

break;


}

}

void final()
{
char a;

menu();

cin >> a;

wynik(a);

}

int main()
{
final();
return 0;


}