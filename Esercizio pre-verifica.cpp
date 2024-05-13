#include<iostream>
#include<cstdlib>
using namespace std;
int a,x,y,z,p;


float media(float a1, float a2, float a3)
{float m=0;
m=(a1+a2+a3)/3;
/*
{
cout<<"La media e' "<<m<<endl;
}
*/
return m;
}

float valore_minimo(float a1, float a2, float a3)
{
float h=0;


return h;
}

float valore_massimo(float a1, float a2, float a3)
{
float f=0;
if(a1>a2)
    if(a3<a2)
        f=a1;
if(a3>a1)
    if(a2<a1)
        f=a3;
if(a2>a1)
    if(a1>a3)
        f=a2;
f=a1=a2=a3;
cout<<"Il valore max e' "<<f<<endl;
return f;
}


float ricerca(float a1, float a2, float a3)
{
float l;
int b=0;
cout<<"Inserisci un valore e diro' se c'e' o meno"<<endl;
cin>>b;

if (a1==b || a2==b || a3==b)
      l=0;

else
    l=1;

if(l==0)
    cout<<"Il valore "<<b<<" e' stato trovato"<<endl;
else if(l==1)
    cout<<"Il valore "<<b<<" non e' stato trovato"<<endl;
return l;
}


int main()
{do
{
cout<<"Inserisci 3 numeri (interi)"<<endl;
cin>>x>>y>>z;
do{
do{
cout<<"Cosa vuoi fare? (1= Media; 2= Visualizzare valore min.; 3=Visualizzare valore max.; 4=Ricerca; 5=Esci)"<<endl;
cin>>a;
if(a<1 || a>5)
        cout<<"Errore"<<endl;
}while(a<1 || a>5);
switch(a)
{case 1:
    {
        p = media(x,y,z);
        cout<<"La media e' "<<p<<endl;
        break;
    }
case 2: valore_minimo(x,y,z);break;
case 3: valore_massimo(x,y,z);break;
case 4: ricerca(x,y,z);break;
case 5: break;
default: cout<<"Scelta errata"<<endl;
}
}while(a>0 && a<5);
}while(a<5);
return 0;
}
