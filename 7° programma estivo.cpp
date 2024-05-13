#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char codice_numerico[5], titolo[20], autore[20], editore[20];
    int anno, copie;
}archivio[100],appo;

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti libri vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice numerico libro "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].codice_numerico);
            if(strlen(archivio[i].codice_numerico)!=3)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].codice_numerico)!=3);

        do{
            cout<<"Titolo libro "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].titolo);
            if(strlen(archivio[i].titolo)<0 || strlen(archivio[i].titolo)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].titolo)<0 || strlen(archivio[i].titolo)>20);

        do{
            cout<<"Autore libro "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].autore);
            if(strlen(archivio[i].autore)<0 || strlen(archivio[i].autore)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].autore)<0 || strlen(archivio[i].autore)>20);

        do{
            cout<<"Editore libro "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].editore);
            if(strlen(archivio[i].editore)<0 || strlen(archivio[i].editore)>20)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].editore)<0 || strlen(archivio[i].editore)>20);

            do{
            cout<<"Anno di edizione libro "<<i+1<<" :"<<endl;
            cin>>archivio[i].anno;
            if(archivio[i].anno<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].anno<0);

        do{
            cout<<"Numero di copie disponibili libro "<<i+1<<" :"<<endl;
            cin>>archivio[i].copie;
            if(archivio[i].copie<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].copie<0);

        }
cout<<endl<<endl;
return n;
}

void procedura(int n)
{
    char titolo[20];
    int trovato=0, scelta=0, conta=0;

    do{
        cout<<"Cosa vuoi fare? (1=Uscita del libro; 2=Rientro del libro)"<<endl;
        cin>>scelta;
        if(scelta<1 || scelta>2)
            cout<<"Errore"<<endl;
        }while(scelta<1 || scelta>2);

    do{
        cout<<"Inserisci il titolo"<<endl;
        fflush(stdin);
        gets(titolo);
        if(strlen(titolo)<0 || strlen(titolo)>20)
            cout<<"Errore"<<endl;
    }while(strlen(titolo)<0 || strlen(titolo)>20);

    if(scelta==1)
    {
        for(int i=0;i<n;i++)
        {
            if(strcmp(archivio[i].titolo,titolo)==0)
            {
                trovato++;

                if(archivio[i].copie>0)
                {
                    conta++;
                    archivio[i].copie--;
                }

            }
        }
    if(trovato==0)
        cout<<"Il libro inserito non e' stato trovato"<<endl;
    if(conta==0)
        cout<<"Il libro inserito non ha copie disponibili"<<endl;
    }
    else if(scelta==2)
    {
        for(int i=0;i<n;i++)
        {
            if(strcmp(archivio[i].titolo,titolo)==0)
            {
                trovato++;
                archivio[i].copie++;
            }
        }

    if(trovato==0)
        cout<<"Il libro inserito non e' stato trovato"<<endl;

    }

    for(int i=0;i<n;i++)
    {

        cout<<"Libro #"<<i+1<<" :"<<endl<<endl;
        cout<<"Codice numerico: "<<archivio[i].codice_numerico<<endl;
        cout<<"Titolo: "<<archivio[i].titolo<<endl;
        cout<<"Autore: "<<archivio[i].autore<<endl;
        cout<<"Editore: "<<archivio[i].editore<<endl;
        cout<<"Anno di edizione: "<<archivio[i].anno<<endl;
        cout<<"Numero di copie disponibili: "<<archivio[i].copie<<endl;
    }

}

void codice_titolo(int n)
{
    int trovato=0;

    cout<<"Ecco i codici e i titoli dei libri le cui copie disponibili sono nulle:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].copie==0)
        {
            trovato++;
            cout<<"Codice numerico "<<i+1<<" :"<<archivio[i].codice_numerico<<endl;
            cout<<"Titolo "<<i+1<<" :"<<archivio[i].titolo<<endl;
        }

    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

void stampa1(int n)
{
    char autore[20];
    int trovato=0;

    do{
        cout<<"Inserisci l'autore :"<<endl;
        fflush(stdin);
        gets(autore);
        if(strlen(autore)<0 || strlen(autore)>20)
            cout<<"Errore"<<endl;
    }while(strlen(autore)<0 || strlen(autore)>20);

    cout<<"Ecco i libri ordinati per anno di edizione:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(archivio[i].autore,archivio[j].autore)>0)
            {
                trovato++;
                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;
            }
        }

        cout<<"Libro #"<<i+1<<" :"<<endl<<endl;
        cout<<"Codice numerico: "<<archivio[i].codice_numerico<<endl;
        cout<<"Titolo: "<<archivio[i].titolo<<endl;
        cout<<"Autore: "<<archivio[i].autore<<endl;
        cout<<"Editore: "<<archivio[i].editore<<endl;
        cout<<"Anno di edizione: "<<archivio[i].anno<<endl;
        cout<<"Numero di copie disponibili: "<<archivio[i].copie<<endl;
    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

void stampa2(int n)
{
    int trovato=0;

    cout<<"Ecco i codici dei libri le cui copie disponibili sono nulle:"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].copie==0)
        {
            trovato++;
            cout<<"Codice numerico "<<i+1<<" :"<<archivio[i].codice_numerico<<endl;
        }

    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

int main ()
{
    int r,n;

do{
n=ins();
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Procedura di Uscita/Rientro di un libro per titolo"<<endl;
	   cout<<"2-Visualizzazione del codice e del titolo di tutti quei libri il cui numero di copie disponibili risulta nullo;"<<endl;
	   cout<<"3-Stampa ordinata, per anno di edizione, di tutti i libri di un autore dato in input;"<<endl;
	   cout<<"4-Stampa del codice di tutti i libri le cui copie disponibili sono nulle;"<<endl;
	   cout<<"5-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    procedura(n);
                    break;
                    }
            case 2:{
                    codice_titolo(n);
                    break;
                    }
            case 3:{
                    stampa1(n);
                    break;
                    }
            case 4:{
                    stampa2(n);
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
