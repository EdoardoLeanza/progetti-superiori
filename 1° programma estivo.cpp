#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char cod_prov[5], denom_prov[20], regione[20];
    int pop;
}archivio[100],appo;

int ins()
{
    int n=0;
    do{
	   cout<<"Quante provincie italiane vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice provincia "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cod_prov);
            if(strlen(archivio[i].cod_prov)<0 || strlen(archivio[i].cod_prov)>5)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cod_prov)<0 || strlen(archivio[i].cod_prov)>5);

        do{
            cout<<"Denominazione provincia "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].denom_prov);
            if(strlen(archivio[i].denom_prov)<0 || strlen(archivio[i].denom_prov)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].denom_prov)<0 || strlen(archivio[i].denom_prov)>20);

        do{
            cout<<"Regione di appartenenza "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].regione);
            if(strlen(archivio[i].regione)<0 || strlen(archivio[i].regione)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].regione)<0 || strlen(archivio[i].regione)>20);

        do{
            cout<<"Popolazione della provincia inserita (max 5) "<<i+1<<":"<<endl;
            cin>>archivio[i].pop;
            if(archivio[i].pop<=0 || archivio[i].pop>5)
                cout<<"Errore"<<endl;
        }while(archivio[i].pop<=0 || archivio[i].pop>5);

        }
cout<<endl<<endl;
return n;
}

float media(int n)
{
    cout<<"Media della popolazione totale per provincia:"<<endl;

    float m=0,h=0;

    for(int i=0;i<n;i++)
    {
        h=h+archivio[i].pop;
        m=h/n;
    }

cout<<m<<endl;
return m;
}

void stampa1(int n, float m)
{
    cout<<"Ecco le provincie con popolazione inferiore alla media:"<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].pop<m)
            cout<<archivio[i].denom_prov<<endl;
    }
}

void stampa2(int n)
{
    cout<<"Ecco la provincia piu' popolosa:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(archivio[i].pop<archivio[j].pop)
            {

                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;

            }
        }
    }
cout<<archivio[0].denom_prov<<endl;
}

void prov_pop(int n)
{
    char prov[20];

    do{
        cout<<"Inserisci nome della provincia :"<<endl;
        fflush(stdin);
        gets(prov);
        if(strlen(prov)<0 || strlen(prov)>20)
            cout<<"Errore"<<endl;
    }while(strlen(prov)<0 || strlen(prov)>20);

    cout<<"La popolazione di "<<prov<<" e':"<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(prov,archivio[i].denom_prov)==0)
        cout<<archivio[i].pop<<endl;
    }

}

void cancellazione(int n)
{
    int canc=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(archivio[i].pop>archivio[j].pop)
            {

                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;

            }
        }
    }

    strcpy(archivio[0].cod_prov,"");
    strcpy(archivio[0].denom_prov,"");
    strcpy(archivio[0].regione,"");
    archivio[0].pop=0;

    cout<<"Ecco il nuovo archivio: "<<endl;

    for(int i=0;i<n;i++)
    {
    cout<<"Codice provincia: "<<archivio[i].cod_prov<<endl;
    cout<<"Denominazione provincia: "<<archivio[i].denom_prov<<endl;
    cout<<"Regione provincia: "<<archivio[i].regione<<endl;
    cout<<"Popolazione provincia: "<<archivio[i].pop<<endl;
    }
}

int main ()
{
    int r,n;
    float m;

do{
n=ins();
m=media(n);
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Media della popolazione per provincie"<<endl;
	   cout<<"2-Stampa di tutte le province con popolazione inferiore alla media;"<<endl;
	   cout<<"3-Stampa della provincia piu' popolosa;"<<endl;
	   cout<<"4-Richiesta una provincia darne la popolazione;"<<endl;
	   cout<<"5-Cancellazione della provincia con il minor numero di abitanti"<<endl;
	   cout<<"6-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    media(n);
                    break;
                    }
            case 2:{
                    stampa1(n,m);
                    break;
                    }
            case 3:{
                    stampa2(n);
                    break;
                    }
            case 4:{
                    prov_pop(n);
                    break;
                    }
            case 5:{
                    cancellazione(n);
                    break;
                    }
            case 6:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=5);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
