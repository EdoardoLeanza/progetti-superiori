#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char c[5], nome[10], cognome[10], corso[1], classe[2];
    int assenze[10];
    float ore_annuale,anno_scol;
}archivio[100],appo;

struct diplomati
{
    float anno_scol;
    char c[5], nome[10], cognome[10];
}diplomati[100];

struct trasferiti
{
    float anno_scol;
    char c[5], nome[10], cognome[10];
}trasferiti[100];

/*
bool cerca_char(string s, char ca)
{
    bool esito=false; // se trova il carattere c, esito deve diventare true!
    if (s.find(ca,0)>-1)
        esito=true;
    return esito;
}
*/


int ins()
{
    int n=0, errore_classe;
    do{
	   cout<<"Quanti alunni ci sono in totale nella scuola? (max 100)"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Codice alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].c);
            if(strlen(archivio[i].c)!=5)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].c)!=5);

        do{
            cout<<"Cognome alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].cognome);
            if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>10)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>10);

        do{
            cout<<"Nome alunno "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].nome);
            if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>10)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>10);

        do{
            cout<<"Anno scolastico alunno "<<i+1<<" (dal 2000 al 2019):"<<endl;
            fflush(stdin);
            cin>>archivio[i].anno_scol;
            if(archivio[i].anno_scol<2000 || archivio[i].anno_scol>2019)
                cout<<"Errore"<<endl;

        }while(archivio[i].anno_scol<2000 || archivio[i].anno_scol>2019);
        cout<<"Valore inserito di anno scolastico:"<<archivio[i].anno_scol; //
        do{
            cout<<"Corso di studi alunno "<<i+1<<" (L=liceo, I=istituto tecnico):"<<endl;
            fflush(stdin);
            gets(archivio[i].corso);
            if(strlen(archivio[i].corso)<0 || strlen(archivio[i].corso)>1)
                cout<<"Errore"<<endl;

            if(strcmp(archivio[i].corso,"L")==0 || strcmp(archivio[i].corso,"l")==0)
                cout<<"Le sezioni saranno S,T,U"<<endl;

            if(strcmp(archivio[i].corso,"I")==0 || strcmp(archivio[i].corso,"i")==0)
                cout<<"Le sezioni saranno dalla A alla E"<<endl;
        }while(strlen(archivio[i].corso)<0 || strlen(archivio[i].corso)>1);



        do{
            errore_classe=0;
            cout<<"Classe alunno "<<i+1<<" (se l'alunno e' frequentante:inserire classe(es.: 1A, 2C...), se e' diplomato:inserire DI, se e' trasferito:inserire TR):"<<endl;
            fflush(stdin);
            gets(archivio[i].classe);
            //cout<<strlen(archivio[i].classe);
            if(strlen(archivio[i].classe)!=2)
                {
                cout<<"Errore"<<endl;
                errore_classe=1;
                }
            /*if(
               ( strcmp(archivio[i].corso,"L")==0 || strcmp(archivio[i].corso,"l")==0 ) &&
               (
                cerca_char(archivio[i].classe,"a") || cerca_char(archivio[i].classe,"A") || cerca_char(archivio[i].classe,"b") || cerca_char(archivio[i].classe,"B") || cerca_char(archivio[i].classe,"c") || cerca_char(archivio[i].classe,"C") || cerca_char(archivio[i].classe,"d") || cerca_char(archivio[i].classe,"D") || cerca_char(archivio[i].classe,"e") || cerca_char(archivio[i].classe,"E")
                )
               )
                {
                    cout<<"Errore, i liceali non possono far parte delle classi dalla A alla E"<<endl;
                    errore_classe=1;
                }
            if(( strcmp(archivio[i].corso,"I")==0 || strcmp(archivio[i].corso,"i")==0 ) && (strchr(archivio[i].classe,"s") || strchr(archivio[i].classe,"S") || strchr(archivio[i].classe,"t") || strchr(archivio[i].classe,"T") || strchr(archivio[i].classe,"u") || strchr(archivio[i].classe,"U")))
                {
                cout<<"Errore, gli alunni dell'istituto tecnico non possono far parte delle classi S,T,U"<<endl;
                errore_classe=1;
                }
                */
        }while(errore_classe==1);

        for(int h=0;h<10;h++)
        {
        do{
            cout<<"Ore di assenza mensili mese "<<h+1<<" alunno "<<i+1<<" :"<<endl;
            cin>>archivio[i].assenze[h];
            if(archivio[i].assenze[h]<0)
                cout<<"Errore"<<endl;
        }while(archivio[i].assenze[h]<0);
        }

        do{
            cout<<"Monte ore annuale alunno "<<i+1<<" (891 biennio Liceo, 990 triennio Liceo, 1056 ITI):"<<endl;
            fflush(stdin);
            cin>>archivio[i].ore_annuale;
            if(archivio[i].ore_annuale!=891 && archivio[i].ore_annuale!=990 && archivio[i].ore_annuale!=1056)
                cout<<"Errore"<<endl;
        }while(archivio[i].ore_annuale!=891 && archivio[i].ore_annuale!=990 && archivio[i].ore_annuale!=1056);

        }
cout<<archivio[0].anno_scol<<endl;
cout<<archivio[1].anno_scol<<endl;
cout<<archivio[2].anno_scol<<endl;
cout<<endl<<endl;
return n;
}
//ok
void ordinamento(int n)
{
    int i,j;
    cout<<"Ordinamento crescente per classe:"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(archivio[i].classe,archivio[j].classe)>0)
            {

                appo=archivio[i];
                archivio[i]=archivio[j];
                archivio[j]=appo;

            }
        }
    //cout<<archivio[i].classe<<endl;
    }

    cout<<"Ecco l'elenco degli alunni:"<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Classe alunno "<<i+1<<" :"<<archivio[i].classe<<endl;
        cout<<"Anno alunno "<<i+1<<" :"<<archivio[i].anno_scol<<endl;
        cout<<"Cognome alunno "<<i+1<<" :"<<archivio[i].cognome<<endl;
        cout<<"Nome alunno "<<i+1<<" :"<<archivio[i].nome<<endl;
    }
}

void assenze(int n)
{
    char c[2];
    int assenze=0;
    float o=0;

    do{
        cout<<"Inserisci classe"<<endl;
        fflush(stdin);
        gets(c);
        if(strlen(c)<0 || strlen(c)>2)
            cout<<"Errore"<<endl;
    }while(strlen(c)<0 || strlen(c)>2);

   /* string v[50];

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].classe,c)==0)
            strcpy(v[i],archivio[i].c);
    }*/


/*for(int l=2000;l<2020;l++)
{
    for(int h=0;h<n;h++)
    {
        if(l==archivio[i].anno_scol && strcmp(archivio[i].classe,c)==0)
            assenze=assenze+archivio[i].assenze;
    }
}

    cout<<archivio[i].nome<<endl;
    cout<<archivio[i].cognome<<endl;
    cout<<assenze<<endl;
}

//cout<<"Ecco gli alunni il cui numero di assenze supera i 3 quarti del monte ore annuale:"<<endl;

    for(int i=0;i<n;i++)
        o=0.75*archivio[i].ore_annuale;

    if(assenze>o)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Cognome alunno "<<i+1<<" :"<<archivio[i].cognome<<endl;
            cout<<"Nome alunno "<<i+1<<" :"<<archivio[i].nome<<endl;
        }
        }*/
}
//ok
void stampa(int n)
{
    int cont1=0, cont2=0, cont3=0;
    cout<<"Ecco l'elenco alfabetico della scuola, per cognome, con l'indicazione della classe di appartenenza:"<<endl;

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
    cout<<archivio[i].cognome<<" classe "<<archivio[i].classe<<endl;
    }

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].classe,"di")==0 || strcmp(archivio[i].classe,"DI")==0)
            cont1++;
        if(strcmp(archivio[i].classe,"tr")==0 || strcmp(archivio[i].classe,"TR")==0)
            cont2++;
        if(strcmp(archivio[i].classe,"di")>0 || strcmp(archivio[i].classe,"DI")>0 || strcmp(archivio[i].classe,"tr")>0 || strcmp(archivio[i].classe,"TR")>0)
            cont3++;
    }

    cout<<"Numero di diplomati: "<<cont1<<endl;
    cout<<"Numero di trasferiti: "<<cont2<<endl;
    cout<<"Numero di frequentanti: "<<cont3<<endl;
}
//ok
void modifica(int n)
{
    char cog[10];
    int tr=0;

    do{
        cout<<"Inserisci cognome alunno"<<endl;
        fflush(stdin);
        gets(cog);
        if(strlen(cog)<0 || strlen(cog)>10)
            cout<<"Errore"<<endl;
    }while(strlen(cog)<0 || strlen(cog)>10);

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].cognome,cog)==0)
        {
            tr++;
            do{
                cout<<"Inserisci la sua nuova classe"<<endl;
                fflush(stdin);
                gets(archivio[i].classe);
                if(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>2)
                    cout<<"Errore"<<endl;
            }while(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>2);
        }
    }
if(tr==0)
    cout<<"Il cognome "<<cog<<" non e' stato trovato"<<endl;
}

void cancellazione(int n)
{
    int canc=0;

    cout<<"Ecco il nuovo archivio: "<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(archivio[i].classe,"DI")==0 || strcmp(archivio[i].classe,"di")==0 || strcmp(archivio[i].classe,"TR")==0 || strcmp(archivio[i].classe,"tr")==0)
        {
            for(int j=i;j<n;j++)
            {
                archivio[j]=archivio[j+1];
                canc++;
            }
        }
    cout<<archivio[i].c<<endl;
    cout<<archivio[i].cognome<<endl;
    cout<<archivio[i].nome<<endl;
    cout<<archivio[i].corso<<endl;
    cout<<archivio[i].classe<<endl;
    cout<<archivio[i].anno_scol<<endl;
    cout<<archivio[i].assenze<<endl;
    cout<<archivio[i].ore_annuale<<endl;
    }
if(canc==0)
    cout<<"Non sono stati trovati alunni che sono o diplomati o trasferiti"<<endl;

    for(int i=0;i<n;i++)
    {

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
	   cout<<"1-Ordinamento;"<<endl;
	   cout<<"2-Assenze;"<<endl;
	   cout<<"3-Stampa;"<<endl;
	   cout<<"4-Modifica;"<<endl;
	   cout<<"5-Cancellazione"<<endl;
	   cout<<"6-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    ordinamento(n);
                    break;
                    }
            case 2:{
                    assenze(n);
                    break;
                    }
            case 3:{
                    stampa(n);
                    break;
                    }
            case 4:{
                    modifica(n);
                    break;
                    }
            case 5:{
                    cancellazione(n);
                    break;
                    }
            case 6:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=6);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
