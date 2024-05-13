#include <iostream>
#include <cstdlib>
using namespace std;
int vett[10]={5,9,1,6,3,7,9,1,6,8};

int ricerca(int n)
{
int trovato=0,i;
for(int i=0;i<10;i++)
{
        if(vett[i]==n)
            trovato++;
}
{

}
return trovato;
}

void ordinamento(int n)
{
int j=0,appo=0;
for(int i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
{
    if(vett[i]>vett[j])
{
appo=vett[i];
vett[i]=vett[j];
vett[j]=appo;
}
}
}
for(int i=0;i<10;i++)
{
	cout<<vett[i]<<endl;
}
}

float media(int n)
{
float h=0,m=0,s=n;
{
for(int i=0;i<s;i++)
{
h=h+vett[i];
m=h/s;
}
}
return m;
}

int main()
{
    float r,l;
    r=ricerca(9);
    if(r==0)
    cout<<"Il valore inserito non e' stato trovato"<<endl;
else
    cout<<"Il valore inserito e' stato trovato "<<r<<" volte"<<endl;
    ordinamento(10);
    l=media(10);
    cout<<"La media e' "<<l<<endl;
    return 0;
}
