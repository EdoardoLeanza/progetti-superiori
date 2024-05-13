#include<iostream>
using namespace std;
int a,i,s,z,l;
float st[100],m,h,b,u,f;

void inserimento()
{do
{cout<<"Inserisci numero di studenti (max 100)"<<endl;
cin>>s;
if(s<1 || s>100)
    cout<<"Errore"<<endl;
}while(s<1 || s>100);

for(i=0;i<s;i++)
{cout<<"Inserisci altezza dello studente "<<i+1<<" (tra 100 e 250 cm)"<<endl;
do{
cin>>st[i];
if(st[i]<100 || st[i]>250)
    cout<<"Errore, l'altezza deve essere tra 100 e 250 cm"<<endl;
}while(st[i]<100 || st[i]>250);
}
}

void stampa()
{for(i=0;i<s;i++)
cout<<"L'altezza dello studente numero "<<i+1<<" e' "<<st[i]<<endl;
}


void verifica()
{cout<<"Inserisci un'altezza e diro' se c'e' o meno nel vettore"<<endl;
cin>>b;
for(i=0;i<s;i++)
{
if (st[i]==b)
{      l=0;
       break;
}
else
    l=1;
}
if(l==0)
    cout<<"L'altezza "<<b<<" e' stata trovata"<<endl;
else if(l==1)
    cout<<"L'altezza "<<b<<" non e' stata trovata"<<endl;
}


void stampa2()
{cout<<"Inserisci un'altezza e mostrero' a chi appartiene"<<endl;
cin>>f;
for(i=0;i<s;i++)
{if(st[i]==f)
    cout<<"L'altezza "<<f<<" appartiene allo studente numero "<<i+1<<endl;
}
}


void media()
{h=0;
{for(i=0;i<s;i++)
{h=h+st[i];
    m=h/s;
}
}
cout<<"La media e' "<<m<<" cm"<<endl;
}


void sup()
{
z=0;
{
cout<<"Inserisci il valore"<<endl;
cin>>u;
for(i=0;i<s;i++)
    if(st[i]>u)
            z++;
}
cout<<"I "<<u<<" cm sono stati superati da "<<z<<" studenti"<<endl;
}


int main()
{do
{
    inserimento();
do{
do{
cout<<"Cosa vuoi fare? (1= Inserimento; 2= Stampa; 3= Verifica; 4= Altezza/Studente; 5= Media; 6= Altezza superiore; 7=Esci)"<<endl;
cin>>a;
if(a<1 || a>7)
        cout<<"Errore"<<endl;
}while(a<1 || a>7);
switch(a)
{case 1: inserimento();break;
case 2: stampa();break;
case 3: verifica();break;
case 4: stampa2();break;
case 5: media();break;
case 6: sup();break;
case 7: break;
default: cout<<"Scelta errata"<<endl;
}
}while(a>0 &&  a<7);
}while(a<7);
return 0;
}
