#include<iostream>
#include<cstdlib>
using namespace std;
int b,a,i,risp,n,c,g,k;
float mm[30],m,d,s;

void inserimento()
{ do
    {cout<<"Inserisci numero dei giorni del mese"<<endl;
     cin>>n;
    }while(n<28 || n>31);
  for(i=0;i<n;i++)
    {cout<<"Inserisci i millimetri di pioggia del giorno "<<i+1<<endl;
    do{
        cin>>mm[i];
        if(mm[i]<1 || mm[i]>30)
            cout<<"Errore, i millimetri di pioggia devono essere tra 1 e 30"<<endl;
      }while(mm[i]<1 || mm[i]>30);
    }
}

void conta()
{
           k=0;
        {   cout<<"Inserisci il numero e mostrero' quante volte e' stato inserito"<<endl;
            cin>>d;
            for(g=0;g<n;g++)
              {  if(d==mm[g])
                    k++;
                }

}
                cout<<"Il numero e' stato trovato "<<k<<" volte"<<endl;
}

void stampa()
{for(i=0;i<n;i++)
cout<<"Il valore inserito per il  giorno "<<i+1<<" e' "<<mm[i]<<endl;
}

void media()
{   s=0;
    {for(i=0;i<n;i++)
    {s=s+mm[i];
    m=s/n;
    }
}
cout<<"La media e' "<<m<<endl;
}
void giorno()
{   cout<<"Inserisci i millimetri caduti e mostrero' in quali giorni/o sono stati rilevati"<<endl;
    cin>>b;
    for(i=0;i<n;i++)
      {  if(mm[i]==b)
            cout<<"Nel giorno "<<i+1<<" e' stato rilevato "<<b<<endl;
    }
}
void stampa2()
{   cout<<"Inserisci un giorno del mese e stampero' i millimetri di pioggia caduti in quel giorno"<<endl;
    cin>>c;
         if(c<0 || c>31)
            cout<<"Errore, scelta errata"<<endl;
        else
            cout<<"Nel giorno "<<c<<" sono caduti "<<mm[c-1]<<" millimetri di pioggia"<<endl;
}

int main()
{
    inserimento();
do{    cout<<"Scegli: 1-Inserimento 2-Stampa 3-Media 4-Giorno 5-Stampa2 6-Conta"<<endl;
        cin>>a;
        switch(a)
        {case 1:inserimento();break;
         case 2:stampa();break;
         case 3:media();break;
         case 4:giorno();break;
         case 5:stampa2();break;
         case 6:conta();break;
         default: cout<<"Scelta errata"<<endl;
        }
cout<<"Vuoi continuare?(1=Si,2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;}
