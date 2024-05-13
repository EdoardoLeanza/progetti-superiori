#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char nome[15], cod_fisc[16];
    float reddito;
}archivio[100],appo;

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti contribuenti vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Nome contribuente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>15)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>15);

        do{
            cout<<"Codice fiscale contribuente "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cod_fisc);
            if(strlen(archivio[i].cod_fisc)<0 || strlen(archivio[i].cod_fisc)>16)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cod_fisc)<0 || strlen(archivio[i].cod_fisc)>16);

        do{
            cout<<"Reddito contribuente "<<i+1<<":"<<endl;
            cin>>archivio[i].reddito;
            cout<<endl;
            if(archivio[i].reddito<=0)
                cout<<"Errore"<<endl;
        }while(archivio[i].reddito<=0);

        }
cout<<endl<<endl;
return n;
}

void cancellazione(int n)
{

    for(int i=0;i<n;i++)
    {
        if(archivio[i].reddito<10000)
        {
            for(int j=i;j<n;j++)

                archivio[j]=archivio[j+1];
        }
    }



    cout<<"Ecco il nuovo archivio: "<<endl<<endl<<endl;

    for(int i=0;i<n;i++)
    {
    cout<<"Nome contribuente: "<<archivio[i].nome<<endl;
    cout<<"Codice fiscale contribuente: "<<archivio[i].cod_fisc<<endl;
    cout<<"Reddito contribuente: "<<archivio[i].reddito<<endl;
    }
}

void calcolo(int n)
{
    float imposta;

    for(int i=0;i<n;i++)
    {
        imposta=(archivio[i].reddito*5.5)/100;

        cout<<"Nome contribuente: "<<archivio[i].nome<<endl;
        cout<<"Codice fiscale contribuente: "<<archivio[i].cod_fisc<<endl;
        cout<<"Ammontare imposta sul 5,5% del reddito contribuente: "<<imposta<<endl<<endl;
    }
}

void stampa(int n)
{
    float cifra=0;
    int tot=0;

do{
        cout<<"Inserisci reddito minimo da visualizzare:"<<endl;
        cin>>cifra;
        if(cifra<=0)
            cout<<"Errore"<<endl;
    }while(cifra<=0);

cout<<"Ecco i contribuenti il cui reddito e' superiore a "<<cifra<<" :"<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].reddito>cifra)
        {
            cout<<archivio[i].nome<<endl;
            tot++;
        }
    }
if(tot==0)
    cout<<"non ci sono contribuenti"<<endl;
else
    cout<<"numero di contribuenti: "<<tot<<endl;
}

int main ()
{
    int r,n;
    //float m;

do{
n=ins();
//m=media(n);
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Cancellazione di tutti i record con reddito imponibile inferiore a 10.000"<<endl;
	   cout<<"2-Calcolo imposta 5,5% sul reddito;"<<endl;
	   cout<<"3-Stampa record con reddito superiore a cifra indicata;"<<endl;
	   cout<<"4-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    cancellazione(n);
                    break;
                    }
            case 2:{
                    calcolo(n);
                    break;
                    }
            case 3:{
                    stampa(n);
                    break;
                    }
            case 4:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=4);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
