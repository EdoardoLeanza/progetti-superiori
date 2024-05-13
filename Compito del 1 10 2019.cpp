#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char numero_preventivo[20], localita[20], mezzo[1];
    int giorni, costo[2];
    float prezzo_totale;
} archivio[100],appo;

int ins()
{
    int n=0, errore_classe;
    do
    {
        cout<<"Quante vacanze vuoi inserire? (max 100)"<<endl;
        cin>>n;
        if(n<=0 || n>100)
            cout<<"Errore"<<endl;
    }
    while(n<=0 || n>100);

    for(int i=0; i<n; i++)
    {
        do
        {
            cout<<endl<<"Numero preventivo vacanza "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].numero_preventivo);
            if(strlen(archivio[i].numero_preventivo)<1 || strlen(archivio[i].numero_preventivo)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(archivio[i].numero_preventivo)<1 || strlen(archivio[i].numero_preventivo)>20);

        do
        {
            cout<<"Localita' vacanza "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].localita);
            if(strlen(archivio[i].localita)<1|| strlen(archivio[i].localita)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(archivio[i].localita)<1 || strlen(archivio[i].localita)>20);

        do
        {
            cout<<"Mezzo (treno=t, nave=n o aereo=a) vacanza "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].mezzo);
            if( strcmp(archivio[i].mezzo,"t")!=0 && strcmp(archivio[i].mezzo,"n")!=0 && strcmp(archivio[i].mezzo,"a")!=0)
                cout<<"Errore"<<endl;
        }
        while( strcmp(archivio[i].mezzo,"t")!=0 && strcmp(archivio[i].mezzo,"n")!=0 && strcmp(archivio[i].mezzo,"a")!=0);

        do
        {
            cout<<"Numero di giorni vacanza "<<i+1<<" :"<<endl;
            cin>>archivio[i].giorni;
            if(archivio[i].giorni<1)
                cout<<"Errore"<<endl;
        }
        while(archivio[i].giorni<1);

        do
        {
            cout<<"Costo complessivo (a listino) del mezzo di trasporto per la vacanza "<<i+1<<" :"<<endl;
            fflush(stdin);
            cin>>archivio[i].costo[0];
            if(archivio[i].costo[0]<0)
                cout<<"Errore"<<endl;
        }
        while(archivio[i].costo[0]<0);

        do
        {
            cout<<"Costo giornaliero (a listino) vacanza "<<i+1<<" :"<<endl;
            fflush(stdin);
            cin>>archivio[i].costo[1];
            if(archivio[i].costo[1]<0)
                cout<<"Errore"<<endl;
        }
        while(archivio[i].costo[1]<0);

        do
        {
            cout<<"Prezzo totale (scontato) vacanza "<<i+1<<" :"<<endl;
            cin>>archivio[i].prezzo_totale;
            if(archivio[i].prezzo_totale<0)
                cout<<"Errore"<<endl;
        }
        while(archivio[i].prezzo_totale<0);
    }
    return n;
}

void stampa1(int n)
{
    char localita[20];
    int cont=0;

    do
    {
        cout<<"Inserisci localita'"<<endl;
        fflush(stdin);
        gets(localita);
        if(strlen(localita)<1 || strlen(localita)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(localita)<1 || strlen(localita)>20);

    for(int i=0; i<n; i++)
    {
        if(strcmp(archivio[i].mezzo,"t")==0 && archivio[i].giorni<10 && strcmp(archivio[i].localita,localita)==0)
        {
            cont++;
            cout<<"Numero preventivo vacanza "<<i+1<<" :"<<archivio[i].numero_preventivo<<endl;
            cout<<"Localita' vacanza "<<i+1<<" :"<<archivio[i].localita<<endl;
            cout<<"Mezzo vacanza "<<i+1<<" :"<<archivio[i].mezzo<<endl;
            cout<<"Numero giorni vacanza "<<i+1<<" :"<<archivio[i].giorni<<endl;
            cout<<"Costo del mezzo di trasporto "<<i+1<<" :"<<archivio[i].costo[0]<<endl;
            cout<<"Costo giornaliero "<<i+1<<" :"<<archivio[i].costo[1]<<endl;
            cout<<"Prezzo totale vacanza "<<i+1<<" :"<<archivio[i].prezzo_totale<<endl;
        }
    }
    if(cont==0)
        cout<<"Nella localita' "<<localita<<" non sono stati trovati preventivi con il treno e con un numero di giorni di vacanza minori di 10"<<endl;
}

void stampa2(int n)
{
    cout<<"Ecco le tre vacanze ordinate per convenienza:"<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(archivio[i].prezzo_totale>archivio[j].prezzo_totale)
            {
                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        cout<<endl<<"Vacanza #"<<i+1<<endl;
        cout<<"Numero preventivo: "<<archivio[i].numero_preventivo<<endl;
        cout<<"Localita': "<<archivio[i].localita<<endl;
        cout<<"Mezzo: "<<archivio[i].mezzo<<endl;
        cout<<"Numero di giorni: "<<archivio[i].giorni<<endl;
        cout<<"Costo complessivo (a listino) del mezzo di trasporto per la vacanza "<<i+1<<" :"<<archivio[i].costo[0]<<endl;
        cout<<"Costo giornaliero (a listino) vacanza "<<i+1<<" :"<<archivio[i].costo[1]<<endl;
        cout<<"Prezzo totale: "<<archivio[i].prezzo_totale<<endl<<endl;
    }
}

void modifica(int n)
{
    char numero_preventivo[20], risp[0];
    int cont=0;
    float h=0;

    do
    {
        cout<<"Inserisci numero di preventivo"<<endl;
        fflush(stdin);
        gets(numero_preventivo);
        if(strlen(numero_preventivo)<1 || strlen(numero_preventivo)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(numero_preventivo)<1 || strlen(numero_preventivo)>20);


    for(int i=0; i<n; i++)
    {
        if(strcmp(archivio[i].numero_preventivo,numero_preventivo)==0)
        {
            cont++;
            do
            {
                cout<<"Cosa vuoi modificare? (m=mezzo di trasporto, n=numero di giorni)"<<endl;
                fflush(stdin);
                gets(risp);
                if(strcmp(risp,"m")!=0 && strcmp(risp,"n")!=0)
                    cout<<"Errore"<<endl;
            }
            while(strcmp(risp,"m")!=0 && strcmp(risp,"n")!=0);

            if(strcmp(risp,"m")==0)
            {
                cout<<"Inserisci nuovo mezzo di trasporto "<<endl;

                do
                {
                    fflush(stdin);
                    gets(archivio[i].mezzo);
                    if( strcmp(archivio[i].mezzo,"t")!=0 && strcmp(archivio[i].mezzo,"n")!=0 && strcmp(archivio[i].mezzo,"a")!=0)
                        cout<<"Errore"<<endl;
                }
                while( (strcmp(archivio[i].mezzo,"t")!=0 && strcmp(archivio[i].mezzo,"n")!=0 && strcmp(archivio[i].mezzo,"a")!=0));
                h=archivio[i].giorni*archivio[i].costo[1]+archivio[i].costo[0];
                cout<<"La differenza di prezzo e': "<<archivio[i].prezzo_totale-h<<endl;
            }

            else if(strcmp(risp,"n")==0)
            {
                cout<<"Inserisci nuovo numero di giorni "<<endl;

                do
                {
                    cin>>archivio[i].giorni;
                    if(archivio[i].giorni<1)
                        cout<<"Errore"<<endl;
                }
                while(archivio[i].giorni<1);
                h=archivio[i].giorni*archivio[i].costo[1]+archivio[i].costo[0];
                cout<<"La differenza di prezzo e': "<<archivio[i].prezzo_totale-h<<endl;

            }
        }
    }
    if(cont==0)
        cout<<"Non e' stato trovato un pacchetto vacanza per il numero di preventivo inserito"<<endl;
}

void stampa(int n)
{
    cout<<"Ecco l'intero archivio: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<endl<<"Numero preventivo vacanza "<<i+1<<" :"<<archivio[i].numero_preventivo<<endl;
        cout<<"Localita' vacanza "<<i+1<<" :"<<archivio[i].localita<<endl;
        cout<<"Mezzo vacanza "<<i+1<<" :"<<archivio[i].mezzo<<endl;
        cout<<"Numero giorni vacanza "<<i+1<<" :"<<archivio[i].giorni<<endl;
        cout<<"Costo complessivo (a listino) del mezzo di trasporto per la vacanza "<<i+1<<" :"<<archivio[i].costo[0]<<endl;
        cout<<"Costo giornaliero (a listino) vacanza "<<i+1<<" :"<<archivio[i].costo[1]<<endl;
        cout<<"Prezzo totale (scontato) vacanza "<<i+1<<" :"<<archivio[i].prezzo_totale<<endl;
    }
}


void cancellazione(int n)
{
    char localita[20];
    int cont=0;

    do
    {
        cout<<"Inserisci localita'"<<endl;
        fflush(stdin);
        gets(localita);
        if(strlen(localita)<1 || strlen(localita)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(localita)<1 || strlen(localita)>20);

    for(int i=0; i<n; i++)
    {
        if(strcmp(archivio[i].localita,localita)==0 && archivio[i].giorni<5)
        {
            cont++;
            for(int j=i; j<n; j++)
                archivio[j]=archivio[j+1];
        }
    }

    if(cont==0)
        cout<<"Non e' stata trovata nessuna vacanza relativa alla localita' "<<localita<<" e che abbia un numero di giorni minore di 5"<<endl;
    else if (cont>0)
        stampa(n);
}


int main ()
{
    int r,n;

    do
    {
        n=ins();
        do
        {
            cout<<endl;
            cout<<"Cosa vuoi fare?"<<endl;
            cout<<"1-Data la localita', stampare tutti i preventivi il cui mezzo di trasporto e' il treno e il numero di giorni di vacanza e' inferiore a 10;"<<endl;
            cout<<"2-Stampare il 'volantino delle offerte' dove compaiono i primi tre pacchetti piu' convenienti;"<<endl;
            cout<<"3-Dato un numero di preventivo, modificare, a richiesta dell'utente, il mezzo di trasporto o il numero di giorni, stampando poi a quanto ammonta la differenza di prezzo;"<<endl;
            cout<<"4-Cancellare tutti i preventivi che fanno riferimento ad una localita' data in input nei quali cui numero di giorni di vacanza e' inferiore a 5;"<<endl;
            cout<<"5-Stampa tutto"<<endl;
            cout<<"6-Esci"<<endl;
            cout<<endl;
            cin>>r;

            switch(r)
            {
            case 1:
            {
                stampa1(n);
                break;
            }
            case 2:
            {
                stampa2(n);
                break;
            }
            case 3:
            {
                modifica(n);
                break;
            }
            case 4:
            {
                cancellazione(n);
                break;
            }
            case 5:
            {
                stampa(n);
                break;
            }
            case 6:
            {
                cout<<"Fine"<<endl;
                break;
            }
            default:
                cout<<"Errore"<<endl;
            }
        }
        while(r!=6);

        do
        {
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }
        while(r<1 || r>2);
    }
    while(r==1);
    return 0;
}
