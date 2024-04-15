#include <iostream>
using namespace std;
int liczba;
int main()
{
    start:
cout<<"Podaj liczbe od 1 do 12: "<<endl;
cin>>liczba;

switch (liczba)
{
case 1:
    cout<<"styczen"<<endl;
break;

case 2:
    cout<<"luty"<<endl;
break;

case 3:
    cout<<"marzec"<<endl;
break;

case 4:
    cout<<"kwiecien"<<endl;
break;

case 5:
    cout<<"maj"<<endl;
break;

case 6:
    cout<<"czerwiec"<<endl;
break;

case 7:
    cout<<"lipiec"<<endl;
break;

case 8:
    cout<<"sierpien"<<endl;
break;

case 9:
    cout<<"wrzesien"<<endl;
break;

case 10:
    cout<<"pazdziernik"<<endl;
break;

case 11:
    cout<<"listopad"<<endl;
break;

case 12:
    cout<<"grudzien"<<endl;
break;

}
goto start;
}