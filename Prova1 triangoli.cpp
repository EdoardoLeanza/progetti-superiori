#include<iostream>
using namespace std;
int l_1, l_2, l_3, risp;
int main ()
{
    do
    {cout<<"Inserisci le misure dei tre lati del triangolo"<<endl;
    cin>>l_1>>l_2>>l_3;


    if (l_1==l_2&&l_1==l_3)
    cout<<"Il triangolo e' equilatero"<<endl;


    else
    if(l_1==l_2||l_2==l_3||l_1==l_3)
        cout<<"Il triangolo e' isoscele"<<endl;


    else
    cout<<"Il triangolo e' scaleno"<<endl;



    cout<<"Vuoi continuare?(1=No, 2=Si)"<<endl;
    cin>>risp;}
    while(risp==2);
    return 0;
}
