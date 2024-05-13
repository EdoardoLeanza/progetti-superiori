#include<iostream>
#include<cstdlib>
#include<cstring> // INSERITO DA ANTONIO
using namespace std;
struct rec1
{
    char cod[5], tit[50], aut[15], c_d[20];
    float pr;
    int arch;
}casa[20];

struct rec2
{
    char t[10], autore[15];
    float p;
}offerte_mese[20];

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti album sono disponibili? (max 20)"<<endl;
	   cin>>n;
	   if(n<=0 || n>20)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>20);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice dell'album "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(casa[i].cod);
            if(strlen(casa[i].cod)<0 || strlen(casa[i].cod)>5)
                cout<<"Errore"<<endl;
        }while(strlen(casa[i].cod)<0 || strlen(casa[i].cod)>5);

        do{
            cout<<"Titolo dell'album "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(casa[i].tit);
            if(strlen(casa[i].tit)<0 || strlen(casa[i].tit)>50)
                cout<<"Errore"<<endl;
        }while(strlen(casa[i].tit)<0 || strlen(casa[i].tit)>50);

        do{
            cout<<"Autore dell'album "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(casa[i].aut);
            if(strlen(casa[i].aut)<0 || strlen(casa[i].aut)>15)
                cout<<"Errore"<<endl;
        }while(strlen(casa[i].aut)<0 || strlen(casa[i].aut)>15);

        do{
            cout<<"Nome della casa discografica dell'album "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(casa[i].c_d);
            if(strlen(casa[i].c_d)<0 || strlen(casa[i].c_d)>20)
                cout<<"Errore"<<endl;
        }while(strlen(casa[i].c_d)<0 || strlen(casa[i].c_d)>20);

        do{
            cout<<"Prezzo dell'album "<<i+1<<" :"<<endl;
            fflush(stdin);
            cin>>casa[i].pr;
            if(casa[i].pr<=0)
                cout<<"Errore"<<endl;
        }while(casa[i].pr<=0);

        do{
            cout<<"Numero di album di questo tipo disponibili :"<<endl;
            fflush(stdin);
            cin>>casa[i].arch;
            if(casa[i].arch<=0)
                cout<<"Errore"<<endl;
        }while(casa[i].arch<=0);
        }
cout<<endl<<endl;
return n;
}

void st_aut(int n)
{
    char a[15];
    do{
        cout<<"Inserisci il nome dell'autore"<<endl;
        fflush(stdin);
        gets(a);
        if(strlen(a)<0)
            cout<<"Errore"<<endl;
    }while(strlen(a)<0);

    for(int i=0;i<n;i++)
    {
        if(strcmp(casa[i].aut,a)==0)
            cout<<casa[i].tit<<endl;
    }
}

void media(int n)
{

    float m,h=0;
    int s=0,i;
    char c_disc[20];
    do{
        cout<<"Inserisci il nome della casa discografica"<<endl;
        fflush(stdin);
        gets(c_disc);
        if(strlen(c_disc)<0)
            cout<<"Errore"<<endl;
    }while(strlen(c_disc)<0);

    for(i=0;i<n;i++)
    {
        if(strcmp(casa[i].c_d,c_disc)==0)
        {
            s++;
            h=h+casa[i].pr;
        }
    }
m=h/s;
if(s==0)
    cout<<"La casa discografica non esiste"<<endl;
else
    cout<<m<<endl;
}

void p_min_venti(int n)
{
    int tr=0;
    for(int i=0;i<n;i++)
    {
        if(casa[i].pr<20)
        {
            tr++;
            cout<<"L'album "<<casa[i].tit<<" di "<<casa[i].aut<<" costa meno di 20 euro"<<endl;
        }
    }
if(tr==0)
    cout<<"Nulla costa meno di 20 euro"<<endl;
}

void of_mese(int n)
{
    int z=0;
    for(int i=0;i<n;i++)
    {
        if(casa[i].pr<20)
        {
            strcpy(offerte_mese[z].autore,casa[i].aut);
            strcpy(offerte_mese[z].t,casa[i].tit);
            offerte_mese[z].p=casa[i].pr;
            z++;
        }
    }
    cout<<"Ecco le offerte di questo mese:"<<endl;
    for(int i=0;i<z;i++)
    {
        cout<<"Prezzo disco "<<i+1<<": "<<offerte_mese[i].p<<endl;
        cout<<"Autore disco "<<i+1<<": "<<offerte_mese[i].autore<<endl;
        cout<<"Titolo disco "<<i+1<<": "<<offerte_mese[i].t<<endl;
    }
}

void stampa(int n)
{
    cout<<"Ecco tutto quello che hai inserito:"<<endl<<endl;
    cout<<"Numero di album: "<<n<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Codice album "<<i+1<<": "<<casa[i].cod<<endl;
        cout<<"Titolo album "<<": "<<casa[i].tit<<endl;
        cout<<"Casa discografica album "<<": "<<casa[i].c_d<<endl;
        cout<<"Prezzo album "<<": "<<casa[i].pr<<endl;
        cout<<"Numero di copie disponibili "<<": "<<casa[i].arch<<endl<<endl;
    }
}

int main ()
{
    int r,n;
n=ins();
do{
    do{
	   cout<<"Cosa vuoi fare? (1-Inserendo un autore, ti dico tutti i suoi album disponibili; 2-Inserendo una casa discografica, ti calcolo la media dei prezzi degli album con quell'etichetta; 3-Ti dico tutti gli album con prezzo minore di 20 euro; 4-Ti mostro le offerte di questo mese a meno di 20 euro; 5-Stampa di tutto quello inserito; 6-Fine)"<<endl;
	   cin>>r;
	   switch(r)
	   {
            case 1:{
                    st_aut(n);
                    break;
                    }
            case 2:{
                    media(n);
                    break;
                    }
            case 3:{
                    p_min_venti(n);
                    break;
                    }
            case 4:{
                    of_mese(n);
                    break;
                    }
            case 5:{
                    stampa(n);
                    break;
                    }
            case 6:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r<1 || r>6);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
