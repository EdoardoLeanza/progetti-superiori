#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char nome[20], cognome[20];
    int eta;
}archivio[10],appo;

int ins()
{
    int n=0;
    do{
	   cout<<"Quante persone vuoi inserire (max 10)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>10)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>10);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Nome "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20);

        do{
            cout<<"Cognome "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20);

        do{
            cout<<"Età "<<i+1<<" :"<<endl;
            cin>>archivio[i].eta;
            if(archivio[i].eta<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].eta<0);

        }
cout<<endl<<endl;
return n;
}

void media(int n)
{
    float m=0,h=0;

    cout<<"Ecco l'eta' media: "<<endl;

    for(int i=0;i<n;i++)
    {
        h=h+archivio[i].eta;
        m=h/n;
    }

cout<<m<<endl;
}

void minima(int n)
{
for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(archivio[i].cognome,archivio[j].cognome)>0)
            {
                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;
            }
        }

    }
cout<<"L'eta' minima trovata e': "<<archivio[0].eta<<endl;
}

void massima(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(archivio[i].cognome,archivio[j].cognome)>0)
            {
                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;
            }
        }

    }
cout<<"L'eta' massima trovata e': "<<archivio[n-1].eta<<endl;
}

void cancellazione(int n)
{
    char nome[20];

    int trovato=0;

    do{
        cout<<"Inserisci nome della persona"<<endl;
        fflush(stdin);
        gets(nome);
        if(strlen(nome)<0 || strlen(nome)>20)
            cout<<"Errore"<<endl;
    }while(strlen(nome)<0 || strlen(nome)>20);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].nome,nome)==0)
        {
            trovato++;

            for(int j=i;j<n;j++)
                archivio[j]=archivio[j+1];
        }
    }

if(trovato==0)
    cout<<"Non e' stato trovato nessun "<<nome<<endl;
else
    {
        cout<<"Ecco il nuovo archivio:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Nome persona "<<i+1<<": "<<archivio[i].nome<<endl;
        cout<<"Cognome persona "<<i+1<<": "<<archivio[i].cognome<<endl;
        cout<<"Eta' persona "<<i+1<<": "<<archivio[i].eta<<endl;
    }
    }
}

void ordinamento(int n)
{
cout<<"Ecco l'archivio ordinato per cognome:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(archivio[i].cognome,archivio[j].cognome)>0)
            {
                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;
            }
        }

        cout<<"Persona #"<<i+1<<endl;
        cout<<"Nome: "<<archivio[i].nome<<endl;
        cout<<"Cognome: "<<archivio[i].cognome<<endl;
        cout<<"Eta': "<<archivio[i].eta<<endl<<endl;
    }
}

void stampa(int n)
{
    cout<<"Ecco l'intero archivio: "<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Nome :"<<i+1<<archivio[i].nome<<endl;
        cout<<"Cognome :"<<i+1<<archivio[i].cognome<<endl;
        cout<<"Eta' :"<<i+1<<archivio[i].eta<<endl<<endl;
    }
}

int main ()
{
    int r,n;

do{
n=ins();
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Eta' media;"<<endl;
	   cout<<"2-Eta' minima;"<<endl;
	   cout<<"3-Eta' massima;"<<endl;
	   cout<<"4-Cancellazione record/nominativo;"<<endl;
	   cout<<"5-Ordinamento archivio per cognome;"<<endl;
	   cout<<"6-Stampa completa archivio;"<<endl;
	   cout<<"7-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    media(n);
                    break;
                    }
            case 2:{
                    minima(n);
                    break;
                    }
            case 3:{
                    massima(n);
                    break;
                    }
            case 4:{
                    cancellazione(n);
                    break;
                    }
            case 5:{
                    ordinamento(n);
                    break;
                    }
            case 6:{
                    stampa(n);
                    break;
                    }
            case 7:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=7);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
