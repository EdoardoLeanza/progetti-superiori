#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char codice[6], cognome[20], nome[20];
    float stipendio;
}archivio[100];

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti dipendenti vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice dipendente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].codice);
            if(strlen(archivio[i].codice)<0 || strlen(archivio[i].codice)>6)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].codice)<0 || strlen(archivio[i].codice)>6);

        do{
            cout<<"Nome dipendente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20);

        do{
            cout<<"Cognome dipendente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20);


        do{
            cout<<"Stipendio dipendente "<<i+1<<" :"<<endl;
            cin>>archivio[i].stipendio;
            if(archivio[i].stipendio<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].stipendio<0);
        }
cout<<endl<<endl;
return n;
}

void stampa(int n)
{
    cout<<"Ecco l'intero archivio:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Codice dipendente "<<i+1<<": "<<archivio[i].codice<<endl;
        cout<<"Nome dipendente "<<i+1<<": "<<archivio[i].nome<<endl;
        cout<<"Cognome dipendente "<<i+1<<": "<<archivio[i].cognome<<endl;
        cout<<"Stipendio dipendente "<<i+1<<": "<<archivio[i].stipendio<<endl<<endl;
    }
}

void stampa2(int n)
{
    float sti=0;

    do{
        cout<<"Inserisci valore dello stipendio"<<endl;
        cin>>sti;
        cout<<endl;
        if(sti<0)
            cout<<"Errore"<<endl;
    }while(sti<0);

    cout<<"Ecco i codici dei dipendenti il cui stipendio e' maggiore di "<<sti<<": "<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(sti<archivio[i].stipendio)
            cout<<archivio[i].codice<<endl;
    }
}


void modifica(int n)
{
    char codice[6];
    int trovato=0;

    do{
        cout<<"Inserisci codice del dipendente di cui modificare lo stipendio"<<endl;
        fflush(stdin);
        gets(codice);
        if(strlen(codice)<0 || strlen(codice)>6)
            cout<<"Errore"<<endl;
    }while(strlen(codice)<0 || strlen(codice)>6);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].codice,codice)==0)
        {
            trovato++;
            cout<<"Inserisci nuovo valore di stipendio del dipendente con il codice "<<archivio[i].codice<<endl;

        do{

            cin>>archivio[i].stipendio;
            if(archivio[i].stipendio<0)
                cout<<"Errore"<<endl;
            }while(archivio[i].stipendio<0);
        }
    }
}

void cancellazione(int n)
{
    char codice[6];
    int trovato=0;

    do{
        cout<<"Inserisci codice del dipendente che vuoi cancellare"<<endl;
        fflush(stdin);
        gets(codice);
        if(strlen(codice)<0 || strlen(codice)>6)
            cout<<"Errore"<<endl;
    }while(strlen(codice)<0 || strlen(codice)>6);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].codice,codice)==0)
        {
            trovato++;

            for(int j=i;j<n;j++)
                archivio[j]=archivio[j+1];
        }
    }

if(trovato==0)
    cout<<"Il codice "<<codice<<" non e' stato trovato"<<endl;

    cout<<"Ecco il nuovo archivio:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Codice dipendente "<<i+1<<": "<<archivio[i].codice<<endl;
        cout<<"Nome dipendente "<<i+1<<": "<<archivio[i].nome<<endl;
        cout<<"Cognome dipendente "<<i+1<<": "<<archivio[i].cognome<<endl;
        cout<<"Stipendio dipendente "<<i+1<<": "<<archivio[i].stipendio<<endl<<endl;
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
	   cout<<"1-Stampa dell'intero archivio;"<<endl;
	   cout<<"2-Stampa ordinata per codice di tutti i dipendenti il cui stipendio e' superiore ad un valore dato in input;"<<endl;
	   cout<<"3-Dato il codice dipendente modificare il suo stipendio;"<<endl;
	   cout<<"4-Cancellazione di un dato dipendente;"<<endl;
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
                    stampa2(n);
                    break;
                    }
            case 3:{
                    modifica(n);
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
