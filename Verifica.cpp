#include<iostream>
#include<cstdlib>
using namespace std;
int vett[15];

void giorni_superiori(float s,int g)
{
    int i,k=0;
for(int i=0;i<g;i++)
{
if(vett[i]>s)
    k++;
}
cout<<"La soglia massima "<<s<<" e' stata superata in "<<k<<" giorni"<<endl;
}

float media(int g)
{
float h=0,m=0;
{
for(int i=0;i<g;i++)
{
h=h+vett[i];
}
m=h/g;
}
return m;
}

void giorni_media(float m, int g)
{
    int l=0;
for(int i=0;i<g;i++)
{
if(vett[i]>m)
    l++;
}
    cout<<"In "<<l<<" giorni/o i valori del quartiere sono superiori alla media"<<endl;
}

void ordinamento(int g)
{
int j=0,appo=0;

for(int i=0;i<g-1;i++)
{
    for(j=i+1;j<g;j++)
{
    if(vett[i]<vett[j])
{
appo=vett[i];
vett[i]=vett[j];
vett[j]=appo;
}
}
}
}

void stampa_ordinamento(int g)
{
ordinamento(g);
cout<<"Le polveri sottili in ordine decrescente sono le seguenti:"<<endl<<endl;
for(int i=0;i<g;i++)
{
        cout<<"La polvere sottile numero "<<i+1<<" e' "<<vett[i]<<endl;
}
}

void stampa_soglia(float s, int g)
{

ordinamento(g);
cout<<"I valori al di sopra della soglia massima sono i seguenti: "<<endl<<endl;
for(int i=0;i<g;i++)
{       if(vett[i]>s)
            cout<<vett[i]<<endl;
}
}

int main()
{
    int a=0,g;
    float mm,s=0;

    do{
    cout<<"Inserisci soglia massima (non deve essere minore di 0)"<<endl;
    cin>>s;
    if(s<=0)
        cout<<"Errore"<<endl;
    }while(s<=0);

    do{
       cout<<"Inserisci numero di giorni (tra 1 e 15)"<<endl;
        cin>>g;
       if(g<1 || g>15)
            cout<<"Errore"<<endl;
        }while(g<1 || g>15);
for(int i=0;i<g;i++)
{
    do{
       cout<<"Inserisci valore polveri sottili del giorno "<<i+1<<" (tra 0 e 100)"<<endl;
        cin>>vett[i];
       if(vett[i]<0 || vett[i]>100)
            cout<<"Errore"<<endl;
        }while(vett[i]<0 || vett[i]>100);
}

mm = media(g);

do
{
do{
do{    cout<<"Scegli: 1-Giorni Superiori;2-Media;3-Giorni superiori media;4-Ordinamento;5-Stampa superiore soglia;6-Esci"<<endl;
        cin>>a;
        if(a<1 || a>6)
        cout<<"Errore"<<endl;
        }while(a<1 || a>6);

        switch(a)
        {
         case 1:giorni_superiori(s,g);break;
         case 2:cout<<"La media e' "<<mm<<endl;break;
         case 3:giorni_media(mm,g);break;
         case 4:stampa_ordinamento(g);break;
         case 5:stampa_soglia(s,g);break;
         case 6:break;
         default: cout<<"Scelta errata"<<endl;
        }
        }while(a>0 && a<6);
        }while(a<6);

return 0;
}
