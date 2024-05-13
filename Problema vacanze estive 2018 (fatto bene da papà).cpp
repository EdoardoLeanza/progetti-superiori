#include<iostream>
#include<cstdlib>
using namespace std;
int risp,scelta,gior,i,t,gi;
float g[31],s,h;

void inserimento()
{do
{cout<<"Quanti sono i giorni del mese(max 31)?"<<endl;
cin>>gior;
if(gior<28 || gior>31)
    cout<<"Numero di giorni errato"<<endl;
}while(gior<28 || gior>31);

for(i=0;i<gior;i++)
{do
{cout<<"Inserisci la temperatura rilevata nel "<<i+1<<" giorno (la temperatura deve essere compresa tra 2 e 10 gradi)"<<endl;
 cin>>g[i];
 if(g[i]<2 || g[i]>10)
    cout<<"La temperatura deve essere compresa tra 2 e 10 gradi!"<<endl;
}while(g[i]<2 || g[i]>10);
}
}

void stampa()
{for(i=0;i<gior;i++)
    cout<<"La temperatura del giorno numero "<<i+1<<" e': "<<g[i]<<endl;
}

void temp()
{s=0;
{for(i=0;i<gior;i++)
{   s=s+g[i];
    h=s/gior;
}
}
cout<<"La media e' "<<h<<endl;
}

void giorno()
{
cout<<"Inserisci una temperatura"<<endl;
cin>>t;
for(i=0;i<gior;i++)
{   if(t==g[i])
        cout<<"La temperatura "<<t<<" e' stata rilevata nel giorno "<<i+1<<endl;
}
}

void giorno2()
{do
{
cout<<"Inserisci un giorno"<<endl;
cin>>gi;
if(gi<1 || gi>gior )
    cout<<"Errore"<<endl;
}while(gi<1 || gi>gior );

cout<<"La temperatura del giorno "<<gi<<" e' "<<g[gi-1]<<endl;
}


void sopra()
{ temp();

for(i=0;i<gior-1;++i)
{    if(g[i]>h)
cout<<"La temperatura del giorno numero "<<i+1<<" (che e' "<<g[i]<<") e' al di sopra della media (la media e' "<<h<<")"<<endl;
}
}


int main()
{do
    {
    inserimento();
    do{
        do{
            cout<<"Cosa vuoi fare? (1= Stampa; 2= Temperatura media; 3= Temperatura/Giorno; 4= Giorno/Temperatura; 5= Sopra alla media; 6= Nuovo mese; 7=Esci)"<<endl;
            cin>>scelta;
            if(scelta<1 || scelta>7)
                cout<<"Errore"<<endl;
        }while(scelta<1 || scelta>7);
        switch(scelta)
        {case 1: stampa();break;
        case 2: temp();break;
        case 3: giorno();break;
        case 4: giorno2();break;
        case 5: sopra();break;
        case 6: inserimento();break;
        case 7: break;
        default: cout<<"Scelta errata"<<endl;
        }
    }while(scelta>0 &&  scelta<7);
}while(scelta<7);
return 0;
}
