#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

bool pytanie(int a, int tab[6])
{

for (int i = 0; i < 6; i++)
{
    if (tab[i] == a)
    {
        return true;
    }
    
}

return false;

}

int losowanie()
{

return (rand()%49) + 1;

}

int main(int argc, char** argv)
{

int a, i=0;

int tab[6];

srand(time(0));

while (i < 6)
{
    a = losowanie();

    if (pytanie(a, tab) == false)
    {
        tab[i] = a;

        i++;

    }
    
}

for (int i = 0; i < 6; i++)
{
    cout << tab[i] << " ";
}















}