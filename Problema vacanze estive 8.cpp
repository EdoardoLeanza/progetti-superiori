#include<iostream>
#include<cstdlib>
using namespace std;
int b,a,i,risp,n,c,g,k;
float mm[30],m,d,s;


void inserimento()
{do
{cout<<"Inserisci numero di giorni del mese (tra 28 e 31)"<<endl;
cin>>n;
if(n<28 || n>31)
    cout<<"Errore"<<endl;
}while(n<28 || n>31);
for(i=0;i<n;i++)
{cout<<"Inserisci mm di pioggia del giorno "<<i+1<<"(tra 1 e 30)"<<endl;
do{
cin>>mm[i];
if(mm[i]<1 || mm[i]>30)
    cout<<"Errore, i mm di pioggia devono essere tra 1 e 30"<<endl;
}while(mm[i]<1 || mm[i]>30);
}
}


void stampa()
{for(i=0;i<n;i++)
cout<<"Il valore inserito per il giorno numero "<<i+1<<" e' "<<mm[i]<<endl;
}


void media()
{s=0;
{for(i=0;i<n;i++)
{s=s+mm[i];
    m=s/n;
}
}
cout<<"La media e' "<<m<<endl;
}


void giorno()
{cout<<"Inserisci i mm caduti e mostrero' in quali giorni sono stati rilevati"<<endl;
cin>>b;
for(i=0;i<n;i++)
{if(mm[i]==b)
    cout<<"Nel giorno "<<i+1<<" e' stato rilevato "<<b<<endl;
}
}


void stampa2()
{cout<<"Inserisci un giorno e stampero' i millimetri di pioggia caduti quel giorno"<<endl;
cin>>c;
if(c<0 || c>31)
    cout<<"Errore, scelta errata"<<endl;
else
    cout<<"Nel giorno "<<c<<" sono caduti "<<mm[c-1]<<" mm di pioggia"<<endl;
}


void conta()
{k=0;
{cout<<"Inserisci i mm di pioggia e mostrero' quante volte e' stato inserito"<<endl;
cin>>d;
for(g=0;g<n;g++)
{if(d==mm[g])
    k++;
}
}
cout<<"Il numero e' stato trovato in "<<k<<" giorni"<<endl;
}


int main()
{do
{
    inserimento();
do{
cout<<"Cosa vuoi fare? (1= Inserimento; 2= Stampa; 3= Media; 4= Giorno; 5= Stampa2; 6= Conta)"<<endl;
cin>>a;
switch(a)
{case 1: inserimento();break;
 case 2: stampa();break;
 case 3: media();break;
 case 4: giorno();break;
 case 5: stampa2();break;
 case 6: conta();break;
 default: cout<<"Scelta errata"<<endl;
 }
 }while(a!=6);
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}


