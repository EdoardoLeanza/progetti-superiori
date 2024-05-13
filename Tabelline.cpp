//Scrivere un programma che abbia le seguenti caratteristiche:
//-Mostri le prime 10 tabelline.
#include<iostream>
//#include<cstdlib>
using namespace std;

int main()
{

for(int i=0;i<11;i++)
{   cout<<endl<<"Tabellina del numero "<<i<<": "<<endl;
    for(int n=0;n<11;n++)
    {
        cout<<i<<"*"<<n<<" = "<<n*i<<endl;
    }
}

return 0;
}
