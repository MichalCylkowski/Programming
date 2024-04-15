#include <iostream>

#include <string>

using namespace std;

void sprawdz(char a);

void pytanie();


void sprawdz(char a)

{
  if (a != 't')
  {
    pytanie();
  }
  
}
void pytanie()

{

char a;

cout << "Czy chcesz zakończyc program ? " << endl;

cin >>a;

sprawdz(a);

}
int main()

{

pytanie();






}
