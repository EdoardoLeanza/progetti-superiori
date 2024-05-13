#include<iostream>
#include<cstdlib>
using namespace std;
int st[50],i,n,s,a,j,appo;

void inserimento()
{
    do{
    cout<<"Inserisci numero di studenti (max 100)"<<endl;
    cin>>n;
    if(n<1 || n>100)
        cout<<"Errore"<<endl;
    }while(n<1 || n>100);
for(i=0;i<n;i++)
{
    do{
       cout<<"Inserisci altezza dello studente "<<i+1<<" (tra 100 e 250cm)"<<endl;
        cin>>st[i];
       if(st[i]<100 || st[i]>250)
            cout<<"Errore"<<endl;
        }while(st[i]<100 || st[i]>250);
}
}


void stampa(int n)
{for(i=0;i<n;i++)
cout<<"Il valore inserito per lo studente "<<i+1<<" e' "<<st[i]<<endl;
}

float ricerca(int n)
{
 int trovato;
 float f;
 do{
    f=0;
    cout<<"Inserisci un'altezza"<<endl;
    cin>>f;
    if(f<100 || f>250)
        cout<<"Errore"<<endl;
  } while(f<100 || f>250);

for(i=0;i<n;i++)
    {
    if(st[i]==f)
        cout<<"L'elemento cercato esiste in posizione "<<i+1<<endl;
    }
return f;
}

void ordinamento(int n)
{do
{
    cout<<"Ordine crescente-1; Ordine decrescente-2;"<<endl;
    cin>>s;
    if(s<1 || s>2)
        cout<<"Errore"<<endl;
}while(s<1 || s>2);

if(s==1)
{
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(st[i]>st[j])
{appo=st[i];
st[i]=st[j];
st[j]=appo;
}
}
}
cout<<"Le altezze degli studenti in ordine crescente sono le seguenti:"<<endl<<endl;
for(i=0;i<n;i++)
{
        cout<<"L'altezza dello studente "<<i+1<<" e' "<<st[i]<<endl;
}
}
else if(s==2)
{
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(st[i]<st[j])
{appo=st[i];
st[i]=st[j];
st[j]=appo;
}
}
}
}
cout<<"Le altezze degli studenti in ordine decrescente sono le seguenti:"<<endl<<endl;
for(i=0;i<n;i++)
{
        cout<<"L'altezza dello studente "<<i+1<<" e' "<<st[i]<<endl;
}
}

int main()
{do
{
    inserimento();
do{
do{    cout<<"Scegli: 1-Inserimento 2-Stampa 3-Ricerca 4-Ordinamento 5-Esci"<<endl;
        cin>>a;
        if(a<1 || a>5)
        cout<<"Errore"<<endl;
        }while(a<1 || a>5);

        switch(a)
        {case 1:inserimento();break;
         case 2:stampa(n);break;
         case 3:ricerca(n);break;
         case 4:ordinamento(n);break;
         case 5:break;
         default: cout<<"Scelta errata"<<endl;
        }
        }while(a>0 && a<5);
        }while(a<5);
return 0;
}
