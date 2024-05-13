#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char codice[5], cognome[15], nome[15], classe[3];
    float assenze;
}archivio[100];

int ins()
{
    int n=0;
    do{
	   cout<<"Quanti alunni vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].codice);
            if(strlen(archivio[i].codice)<0 || strlen(archivio[i].codice)>5)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].codice)<0 || strlen(archivio[i].codice)>5);

        do{
            cout<<"Cognome alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>15)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>15);

        do{
            cout<<"Nome alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>15)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>15);

        do{
            cout<<"Classe alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].classe);
            if(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>3)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>3);

        do{
                cout<<"Assenze mensili alunno "<<i+1<<" :"<<endl;
                cin>>archivio[i].assenze;
                cout<<endl;
                if(archivio[i].assenze<0)
                    cout<<"Errore"<<endl;
            }while(archivio[i].assenze<0);
        }
cout<<endl<<endl;
return n;
}

float assenze(int n)
{
    char classe[3];
    float cont=0;
    int trovato=0;

    do{
        cout<<"Inserisci classe"<<endl;
        fflush(stdin);
        gets(classe);
        if(strlen(classe)<0 || strlen(classe)>3)
            cout<<"Errore"<<endl;
    }while(strlen(classe)<0 || strlen(classe)>3);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].classe,classe)==0)
            {
                cont=cont+archivio[i].assenze;
                trovato++;
            }
    }

if(trovato>0)
    cout<<"La classe inserita ha avuto "<<cont<<" ore di assenza totali"<<endl;
else
    cout<<"La classe inserita non esiste"<<endl;

return cont;
}

void percentuale(int n)
{
    float percentual=0,tot=0;

    for(int i=0;i<n;i++)
        tot=tot+archivio[i].assenze;

    for(int i=0;i<n;i++)
    {
        percentual=(archivio[i].assenze/tot)*100;

        cout<<"L'alunno "<<archivio[i].nome<<" "<<archivio[i].cognome<<" ha una percentuale di "<<percentual<<"% sul totale"<<endl;
    }
}


float media(int n)
{
    float m=0,h=0;

    for(int i=0;i<n;i++)
        h=h+archivio[i].assenze;
m=h/n;

return m;
}

void sotto_media(int n, float m)
{
cout<<"I seguenti alunni hanno un numero di ore di assenze inferiori alla media ("<<m<<"): "<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].assenze<m)
            cout<<"Nome: "<<archivio[i].nome<<" - "<<"Cognome: "<<archivio[i].cognome<<" - "<<"Ore di assenza: "<<archivio[i].assenze<<endl;
    }
}

int main ()
{
    int r,n;
    float m,l;

do{
n=ins();
m=media(n);
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Calcolo totale delle assenze mensili per classe;"<<endl;
	   cout<<"2-La percentuale di assenze di ogni alunno sul totale;"<<endl;
	   cout<<"3-Il calcolo delle ore di assenza media;"<<endl;
	   cout<<"4-La stampa degli alunni le cui assenze sono al di sotto della media;"<<endl;
	   cout<<"5-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    assenze(n);
                    break;
                    }
            case 2:{
                    percentuale(n);
                    break;
                    }
            case 3:{
                    media(n);
                    cout<<"La media delle ore di assenza di tutti gli alunni e': "<<m<<endl;
                    break;
                    }
            case 4:{
                    sotto_media(n,m);
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
