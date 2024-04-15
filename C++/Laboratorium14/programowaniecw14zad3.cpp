#include <iostream>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{

srand(time(0));

cout << 1 + rand() % (6) << endl;

return 0;

}