#include <iostream>

using namespace std;

int main(int argc , char **argv)
{
    cout << "Hello world!" << endl;
    double x = 150000;
    double rate = 0.24;
    for(int i=0;i<3;i++)
    {
        x*=(1+rate);
    }
    cout << x << endl;
    return 0;
}
