#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{

int miesiac;

srand(time(0));

miesiac= (rand()%12) + 1;

switch (miesiac)
{
case 1:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl;

 break;

case 2:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%29) + 1 << endl; 

 break;

case 3:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl; 

 break;

 case 4:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%30) + 1 << endl;

 break;

 case 5:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl;

 break;

 case 6:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%30) + 1 << endl;

 break;

 case 7:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl;

 break;

 case 8:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl;

 break;

 case 9:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%30) + 1 << endl; 

 break;

 case 10:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl;

 break;
 
 case 11:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%30) + 1 << endl; 

 break;

 case 12:

cout << "Miesiąc: " << miesiac << " " << "Dzień " << (rand()%31) + 1 << endl; 

 break;
}











}