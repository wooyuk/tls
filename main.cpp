#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc , char * argv[])
{
    cout << "Hello world!" << endl;
    double x = atof(argv[1]);
    double rate = atof(argv[2]);
    for(int i=0;i<atoi(argv[3]);i++)
    {
        x*=(1+rate);
    }
    cout << showpoint << x << endl;
    return 0;
}
