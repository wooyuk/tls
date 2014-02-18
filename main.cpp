#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc , char * argv[])
{
    printf("Hello world!\n");
    double x = atof(argv[1]);
    double rate = atof(argv[2]);
    for(int i=0;i<atoi(argv[3]);i++)
    {
        x*=(1+rate);
    }
    printf("%f \n",x);
    return 0;
}
