#include<iostream>
#include<cstdlib>
using namespace std;
// p = soglia massima di polveri
// v = vettore con rilevazioni (max 15 giorni)
// b = giorni registrati
// a = scelta
// risp = risposta alla domanda "Vuoi continuare?"
// i = contatore iniziale
// f =
// g = contatore giorni
// u = contatore media
// n =
// h =
// s = somma (della media)
int a,risp,p,i,f,g,u,n,c,l;
float v[14],h,s,b;

void inserimento()
{ do
{
    cout<<"Inserisci la soglia massima di polveri sottili di una citta'(massimo 10)"<<endl;
    cin>>p;
    if(p>10 || p<0)
        cout<<"Massimo 10! (e non negativo)"<<endl;
    }while(p>10 || p<0);
cout<<"In quanti giorni i valori sono stati registrati?"<<endl;
cin>>b;
for(i=0;i<b;i++)
{do
{   cout<<"Inserisci il valore registrato nel "<<i+1<<" giorno"<<endl;
    cin>>v[i];
//cout<<"i vale "<<i<<endl;
    if(v[i]>15 || v[i]<0)
        cout<<"Massimo 15! (e non negativo)"<<endl;
    }while(v[i]>15 || v[i]<0);
}
}


void giorni()
{
g=0;
for(f=0;f<b;f++)
{       if(v[f]>p)
            g++;
}
cout<<"La soglia massima del quartiere e' stata superata "<<g<<" volte"<<endl;
}

void media()
{ s=0;
    {for(u=0;u<b;u++)
    {s=s+v[u];
    h=s/b;
    }
}
cout<<"La media del quartiere e' "<<h<<endl;
}


void stampa()
{for(i=0;i<b;i++)
cout<<"L'elemento num. "<<i+1<<" del vettore e': "<<v[i]<<endl;
}


void ricerca()
{  cout<<"Inserisci il valore e diro' in quali giorni e' stato inserito"<<endl;
   cin>>c;
{    for(l=0;l<b;l++)
        if(c==v[l])
            cout<<"Il valore "<<c<<" e' stato inserito nel giorno "<<l+1<<endl;
}
}


int main()
{
    inserimento();
do{    cout<<"Scegli: 1-Inserimento 2-Giorni 3-Media 4-Stampa 5-Ricerca "<<endl;
        cin>>a;
        switch(a)
        {case 1:inserimento();break;
         case 2:giorni();break;
         case 3:media();break;
         case 4:stampa();break;
         case 5:ricerca();break;
         default: cout<<"Scelta errata"<<endl;
        }
cout<<"Vuoi continuare?(1=Si,2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;}
