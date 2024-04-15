#include<iostream>
using namespace std;
char a;
char b;
char c;
char d;
char e;
char f;
char x;
char y;
int main() {
cout<<"Podaj wartosc wspolczynnika a: "<<endl;
cin>>a;
cout<<"Podaj wartosc wspolczynnika b: "<<endl;
cin>>b;
cout<<"Podaj wartosc wspolczynnika c: "<<endl;
cin>>c;
cout<<"Podaj wartosc wspolczynnika d: "<<endl;
cin>>d;
cout<<"Podaj wartosc wspolczynnika e: "<<endl;
cin>>e;
cout<<"Podaj wartosc wspolczynnika f: "<<endl;
cin>>f;

float x((e*d - b*f)/(a*d - b*c));
float y((a*f - e*c)/(a*d - b*c));

cout<<"X to: "<<x<<endl;
cout<<"Y to: "<<y<<endl;

return 0;

}