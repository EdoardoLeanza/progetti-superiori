#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char cognome[20], nome[20], telefono[10], data_app[10], ora_app[5];
}archivio[100],appo;

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti appuntamenti vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Cognome cliente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20);

        do{
            cout<<"Nome cliente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20);

        do{
            cout<<"Telefono cliente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].telefono);
            if(strlen(archivio[i].telefono)<0 || strlen(archivio[i].telefono)>10)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].telefono)<0 || strlen(archivio[i].telefono)>10);
        do{
            cout<<"Data appuntamento del cliente "<<i+1<<" (espressa da gg/mm/aaaa):"<<endl;
            fflush(stdin);
            gets(archivio[i].data_app);
            if(strlen(archivio[i].data_app)!=10)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].data_app)!=10);

        do{
            cout<<"Ora appuntamento del cliente "<<i+1<<" (espressa in hh:mm):"<<endl;
            fflush(stdin);
            gets(archivio[i].ora_app);
            if(strlen(archivio[i].ora_app)!=5)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].ora_app)!=5);

        }
cout<<endl<<endl;
return n;
}

void stampa(int n)
{
    char data[10], ora[5];
    int trovato=0;

    do{
        cout<<"Inserisci data appuntamento "<<endl;
        fflush(stdin);
        gets(data);
        if(strlen(data)!=10)
            cout<<"Errore"<<endl;
    }while(strlen(data)!=10);

    do{
        cout<<"Inserisci ora appuntamento "<<endl;
        fflush(stdin);
        gets(ora);
        if(strlen(ora)!=5)
            cout<<"Errore"<<endl;
    }while(strlen(ora)!=5);

    cout<<"Ecco i clienti che hanno un appuntamento con la data e l'ora inserita:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].data_app,data)==0 && strcmp(archivio[i].ora_app,ora)==0)
        {
            trovato++;

                cout<<"Cognome: "<<archivio[i].cognome<<endl;
                cout<<"Nome: "<<archivio[i].nome<<endl;
                cout<<"Telefono: "<<archivio[i].telefono<<endl;
        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nessuno appuntamento nella data e nell'ora inserita"<<endl;
}

void modifica(int n)
{
    char cognome[20], nome[20];
    int trovato=0;

    do{
        cout<<"Inserisci cognome"<<endl;
        fflush(stdin);
        gets(cognome);
        if(strlen(cognome)<0 || strlen(cognome)>20)
            cout<<"Errore"<<endl;
    }while(strlen(cognome)<0 || strlen(cognome)>20);

    do{
        cout<<"Inserisci nome"<<endl;
        fflush(stdin);
        gets(nome);
        if(strlen(nome)<0 || strlen(nome)>20)
            cout<<"Errore"<<endl;
    }while(strlen(nome)<0 || strlen(nome)>20);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].cognome,cognome)==0 && strcmp(archivio[i].nome,nome)==0)
        {
            trovato++;
            cout<<"Inserisci nuovo numero di telefono "<<endl;

            do{
            fflush(stdin);
            gets(archivio[i].telefono);
            if(strlen(archivio[i].telefono)<0 || strlen(archivio[i].telefono)>10)
                cout<<"Errore"<<endl;
            }while(strlen(archivio[i].telefono)<0 || strlen(archivio[i].telefono)>10);

        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nessun "<<cognome<<" "<<nome<<endl;
}


void ordinamento(int n)
{

    cout<<"Ecco gli appuntamenti ordinati per data:"<<endl;

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

        cout<<"Appuntamento #"<<i+1<<endl;
        cout<<"Data: "<<archivio[i].data_app<<endl;
        cout<<"Ora: "<<archivio[i].ora_app<<endl;
        cout<<"Cognome: "<<archivio[i].cognome<<endl;
        cout<<"Nome: "<<archivio[i].nome<<endl;
        cout<<"Tel.: "<<archivio[i].telefono<<endl<<endl;
    }
}

void cancellazione(int n)
{
    char cognome[20], nome[20];
    int trovato=0;

    do{
        cout<<"Inserisci cognome del cliente"<<endl;
        fflush(stdin);
        gets(cognome);
        if(strlen(cognome)<0 || strlen(cognome)>20)
            cout<<"Errore"<<endl;
    }while(strlen(cognome)<0 || strlen(cognome)>20);

    do{
        cout<<"Inserisci nome del cliente"<<endl;
        fflush(stdin);
        gets(nome);
        if(strlen(nome)<0 || strlen(nome)>20)
            cout<<"Errore"<<endl;
    }while(strlen(nome)<0 || strlen(nome)>20);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].cognome,cognome)==0 && strcmp(archivio[i].nome,nome)==0)
        {
            trovato++;

            for(int j=i;j<n;j++)
                archivio[j]=archivio[j+1];
        }
    }

if(trovato==0)
    cout<<"Non e' stato trovato nessun "<<cognome<<" "<<nome<<endl;
else
    {
        cout<<"Ecco il nuovo archivio:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Cognome cliente "<<i+1<<": "<<archivio[i].cognome<<endl;
        cout<<"Nome cliente "<<i+1<<": "<<archivio[i].nome<<endl;
        cout<<"Telefono cliente "<<i+1<<": "<<archivio[i].telefono<<endl;
        cout<<"Data appuntamento cliente "<<i+1<<": "<<archivio[i].data_app<<endl;
        cout<<"Ora appuntamento cliente "<<i+1<<": "<<archivio[i].ora_app<<endl;
    }
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
	   cout<<"1-Visualizzare tutti i clienti da ricevere in una data ora di una data giornata;"<<endl;
	   cout<<"2-Modificare il numero di telefono di un dato cliente;"<<endl;
	   cout<<"3-Stampa di tutti gli appuntamenti, ordinati per data;"<<endl;
	   cout<<"4-Cancellazione dell'appuntamento di un cliente dato in input;"<<endl;
	   cout<<"5-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    stampa(n);
                    break;
                    }
            case 2:{
                    modifica(n);
                    break;
                    }
            case 3:{
                    ordinamento(n);
                    break;
                    }
            case 4:{
                    cancellazione(n);
                    break;
                    }
            case 5:{
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
