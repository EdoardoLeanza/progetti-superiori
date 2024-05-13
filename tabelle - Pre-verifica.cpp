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
        char nome[10], cognome[20];
        int eta;
        float reddito;
    }ditta[20];

int inserimento()
{
        int i=0,risp;
    do{fflush(stdin);
        do{cout<<"Inserisci nome"<<endl;
            gets(ditta[i].nome);
        }while(strlen(ditta[i].nome)<0 || strlen(ditta[i].nome)<10);
        fflush(stdin);
        do{cout<<"Inserisci cognome"<<endl;
            gets(ditta[i].cognome);
        }while(strlen(ditta[i].cognome)<0 || strlen(ditta[i].cognome)<20);
        do{cout<<"Inserisci eta'"<<endl;
        cin>>ditta[i].eta;
        }while(ditta[i].eta<0);
        do{cout<<"Inserisci reddito"<<endl;
        cin>>ditta[i].reddito;
        }while(ditta[i].reddito<0);
        i++;
        cout<<"Vuoi continuare? (1-Si; 2-No)"<<endl;
        cin>>risp;
        }while(risp==1 || i<20);
        return i;
}

void stampa(int i)
{
    int n=0;
    do{
        cout<<(ditta[n].nome)<<endl;
        cout<<(ditta[n].cognome)<<endl;
        cout<<ditta[n].eta<<endl;
        cout<<ditta[n].reddito<<endl;
        n++;
    }while(n<i);

}


void stampa_magg_n(int i)
{
    int n=0,k;
    cout<<"Inserisci il reddito minimo"<<endl;
    cin>>k;
    do{
        if(ditta[n].reddito>k)
        {
            cout<<(ditta[n].nome)<<endl;
            cout<<(ditta[n].cognome)<<endl;
            cout<<ditta[n].eta<<endl;
            cout<<ditta[n].reddito<<endl;
        }
        n++;
    }while(n<i);

}

float reddito_mediao(int i)
{

}













int main()
{

return 0;
}
