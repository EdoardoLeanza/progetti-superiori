//Gestione di una ditta in cui ogni record è costituito dai seguenti campi: nome, cognome, età e reddito
//Dopo aver effettuato l'inserimento di n dipendenti realizzare:
//la stampa dell'intero archivio;
//la stampa del numero di dipendenti che il cui reddito è maggiore di un numero inserito in input;
//il reddito medio;
//stampare nome e cognome dei dipendenti che hanno un reddito minore della media;
//cancellazione dei dipendenti la cui età lavorativa è superiore a 40.
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


struct rec
    {
        char nome[20], cognome[20];
        int eta;
        float reddito;
    }ditta;


int main()
{
    int n=0;

    do{
        cout<<"Inserisci il numero di dipendenti"<<endl;
        cin>>n;
        if(n<1)
            cout<<"Errore"<<endl;
        }while(n<1);

        struct rec archivio [n];

    for(int i=0;i<n;i++)
    {
      do{
        do{
            fflush(stdin);
            cout<<"Inserisci nome"<<endl;
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20);

        do{
            fflush(stdin);
            cout<<"Inserisci cognome"<<endl;
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20);

        do{
            cout<<"Inserisci eta'"<<endl;
            cin>>archivio[i].eta;
            if(archivio[i].eta<0 || archivio[i].eta>67)
                cout<<"Errore"<<endl;
        }while(archivio[i].et)<0 || archivio[i].eta>67);

               do{
            cout<<"Inserisci reddito"<<endl;
            cin>>archivio[i].reddito;
            if(archivio[i].reddito<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].reddito<0);

      }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>20 && strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20 && archivio[i].et)<0 || archivio[i].eta>67 && archivio[i].reddito<0);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Il nome del dipendente numero "<<i+1<<" e': "<<archivio[i].nome<<endl;
        cout<<"Il cognome del dipendente numero "<<i+1<<" e': "<<archivio[i].cognome<<endl;
        cout<<"L'eta' del dipendente numero "<<i+1<<" e': "<<archivio[i].eta<<endl;
        cout<<"Il reddito del dipendente numero "<<i+1<<" e': "<<archivio[i].reddito<<endl;
    }

    float u;
    int k=0;

    cout<<"Inserisci valore"<<endl;
    cin>>u;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].reddito>u)
                k++;
    }
    cout<<k<<" dipendenti hanno un reddito maggiore a "<<u<<endl;

    float h=0,m=0;

    for(int i=0;i<n;i++)
    {
        h=h+archivio[i].reddito;
        m=h/n;
    }
    cout<<"Il reddito medio e': "<<m<<endl;


    for(int i=0;i<n;i++)
    {
        if(archivio[i].reddito<m)
            cout<<"I dipendenti che hanno un reddito minore alla media sono: "<<archivio[i].nome<<" "<<archivio[i].cognome<<endl;
    }








return 0;
}
