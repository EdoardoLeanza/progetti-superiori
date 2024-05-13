#include <iostream>
#include <cstdlib>
using namespace std;
int t;

float somma(float a,float b)
{
float s=0;
s=a+b;
return s;
}

int main()
{
    float t = somma(2,3);
    cout<<" "<<t;
}
