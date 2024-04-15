#include <iostream>
using namespace std;
int liczba;
int main()
{
start:

cout<<"Podaj liczbe calkowita maksymalnie 3 cyfrowa: "<<endl;

cin>>liczba;

if (liczba<10 && liczba>-10)
{
    cout<<"Liczba jest jednocyfrowa."<<endl;
}

else if (liczba>=10 && liczba<100)
{
    cout<<"Liczba jest dwucyfrowa."<<endl;
}

else if (liczba<=-10 && liczba>-100)
{
    cout<<"Liczba jest dwucyfrowa."<<endl;
}

else if (liczba>=100 && liczba<1000)
{
    cout<<"Liczba jest trzycyfrowa."<<endl;

}

else if (liczba<=-100 && liczba>-1000)
{
   cout<<"Liczba jest trzycyfrowa."<<endl;
}


goto start;




}