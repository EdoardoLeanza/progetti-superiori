#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char nome[20], cognome[20], luogo_di_nascita[20], indirizzo[25], cod_fisc[17];
    int data_di_nascita[3], eta;
} appo,appo2[100];
FILE *fp;

void ins()
{
    int n=0;
    fp=fopen("anagrafe.bin","ab");
    do
    {
        cout<<"Quante persone vuoi inserire (max 100)?"<<endl;
        cin>>n;
        if(n<1 || n>100)
            cout<<"Errore"<<endl;
    }
    while(n<1 || n>100);

    for(int i=0; i<n; i++)
    {
        do
        {
            cout<<"Nome "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(appo.nome);
            if(strlen(appo.nome)<1 || strlen(appo.nome)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(appo.nome)<1 || strlen(appo.nome)>20);

        do
        {
            cout<<"Cognome "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(appo.cognome);
            if(strlen(appo.cognome)<1 || strlen(appo.cognome)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(appo.cognome)<1 || strlen(appo.cognome)>20);

        do
        {
            cout<<"Giorno di nascita "<<i+1<<" :"<<endl;
            cin>>appo.data_di_nascita[0];
            if(appo.data_di_nascita[0]<1 || appo.data_di_nascita[0]>31)
                cout<<"Errore"<<endl;
        }
        while(appo.data_di_nascita[0]<1 || appo.data_di_nascita[0]>31);

        do
        {
            cout<<"Mese di nascita "<<i+1<<" :"<<endl;
            cin>>appo.data_di_nascita[1];
            if(appo.data_di_nascita[1]<1 || appo.data_di_nascita[1]>12)
                cout<<"Errore"<<endl;
        }
        while(appo.data_di_nascita[1]<1 || appo.data_di_nascita[1]>12);

        do
        {
            cout<<"Anno di nascita "<<i+1<<" :"<<endl;
            cin>>appo.data_di_nascita[2];
            if(appo.data_di_nascita[2]<1)
                cout<<"Errore"<<endl;
        }
        while(appo.data_di_nascita[2]<1);

        do
        {
            cout<<"Luogo di nascita "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(appo.luogo_di_nascita);
            if(strlen(appo.luogo_di_nascita)<1 || strlen(appo.luogo_di_nascita)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(appo.luogo_di_nascita)<1 || strlen(appo.luogo_di_nascita)>20);

        do
        {
            cout<<"Indirizzo "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(appo.indirizzo);
            if(strlen(appo.indirizzo)<1 || strlen(appo.indirizzo)>25)
                cout<<"Errore"<<endl;
        }
        while(strlen(appo.indirizzo)<1 || strlen(appo.indirizzo)>25);

        do
        {
            cout<<"Codice fiscale "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(appo.cod_fisc);
            if(strlen(appo.cod_fisc)!=16)
                cout<<"Errore"<<endl;
        }
        while(strlen(appo.cod_fisc)!=16);

        do
        {
            cout<<"Eta' "<<i+1<<" :"<<endl;
            cin>>appo.eta;
            if(appo.eta<1 || appo.eta>67)
                cout<<"Errore"<<endl;
        }
        while(appo.eta<1 || appo.eta>67);

        fwrite(&appo,sizeof(appo),1,fp);
    }

    fclose(fp);
    cout<<endl<<endl;
}

void stampa()
{
    int primociclo;
    fp=fopen("anagrafe.bin","rb");
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if (!(fread(&appo,sizeof(appo),1,fp)))
            {

                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else
            {
                primociclo=0;
                cout<<endl<<"Nome: "<<appo.nome<<endl;
                cout<<"Cognome: "<<appo.cognome<<endl;
                cout<<"Giorno di nascita: "<<appo.data_di_nascita[0]<<endl;
                cout<<"Mese di nascita: "<<appo.data_di_nascita[1]<<endl;
                cout<<"Anno di nascita: "<<appo.data_di_nascita[2]<<endl;
                cout<<"Luogo di nascita: "<<appo.luogo_di_nascita<<endl;
                cout<<"Indirizzo: "<<appo.indirizzo<<endl;
                cout<<"Codice fiscale: "<<appo.cod_fisc<<endl;
                cout<<"Eta': "<<appo.eta<<endl;

            }
        }
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;

    fclose(fp);
}

void stringa1()
{
    char c[20];
    int trovati=0;
    fp=fopen("anagrafe.bin","rb");

    if(fp!=NULL)
    {

        do
        {
            cout<<"Inserisci cognome"<<endl;
            fflush(stdin);
            gets(c);
            if(strlen(c)<1 || strlen(c)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(c)<1 || strlen(c)>20);

        int primociclo=1;
        while(true)
        {
            if (!(fread(&appo,sizeof(appo),1,fp)))
            {

                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else if(strcmp(appo.cognome,c)==0)
            {
                primociclo=0;
                cout<<endl<<"Nome: "<<appo.nome<<endl;
                cout<<"Cognome: "<<appo.cognome<<endl;
                cout<<"Giorno di nascita: "<<appo.data_di_nascita[0]<<endl;
                cout<<"Mese di nascita: "<<appo.data_di_nascita[1]<<endl;
                cout<<"Anno di nascita: "<<appo.data_di_nascita[2]<<endl;
                cout<<"Luogo di nascita: "<<appo.luogo_di_nascita<<endl;
                cout<<"Indirizzo: "<<appo.indirizzo<<endl;
                cout<<"Codice fiscale: "<<appo.cod_fisc<<endl;
                cout<<"Eta': "<<appo.eta<<endl;
                trovati++;
            }
            primociclo=0;
        }
        if(trovati==0)
            cout<<"Nessuna corrispondenza"<<endl;
    }
    else
        cout<<"Errore: il file non esiste"<<endl;

    fclose(fp);
}

void cognome()
{
    int h=0;
    char c[20];
    fp=fopen("anagrafe.bin","rb");

    if(fp!=NULL)
    {

        do
        {
            cout<<"Inserisci cognome"<<endl;
            fflush(stdin);
            gets(c);
            if(strlen(c)<1 || strlen(c)>20)
                cout<<"Errore"<<endl;
        }
        while(strlen(c)<1 || strlen(c)>20);

        int primociclo=1;
        while(true)
        {

            if (!(fread(&appo,sizeof(appo),1,fp)))
            {
                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else if(strcmp(appo.cognome,c)==0)
                h++;
            primociclo=0;
        }
        cout<<"Ci sono "<<h<<" elementi con il cognome uguale a "<<c<<endl;

    }
    else
        cout<<"Errore: il file non esiste"<<endl;
    fclose(fp);
}

void trova_indir()
{
    char c[17];
    int trovati=0;
    fp=fopen("anagrafe.bin","rb");

    if(fp!=NULL)
    {

        do
        {
            cout<<"Inserisci codice fiscale"<<endl;
            fflush(stdin);
            gets(c);
            if(strlen(c)!=16)
                cout<<"Errore"<<endl;
        }
        while (strlen(c)!=16) ;

        int primociclo=1;
        while(true)
        {
            if (!fread(&appo,sizeof(appo),1,fp))
            {

                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else if(strcmp(appo.cod_fisc,c)==0)
            {
                primociclo=0;

                cout<<"Indirizzo: "<<appo.indirizzo<<endl;
                trovati++;

            }
            primociclo=0;
        }
        if (trovati==0)
            cout<<"Nessuna corrispondenza."<<endl;
    }
    else
        cout<<"Errore: il file non esiste"<<endl;

    fclose(fp);
}

void cancella_contenuto()
{
    char s;
    cout<<"SEI SICURO DI VOLER CANCELLARE COMPLETAMENTE IL CONTENUTO DELL'ARCHIVIO (S/N)???";
    cin>>s;
    if (s=='s' || s=='S')
    {
        fp=fopen("anagrafe.bin","wb");
        fclose(fp);
        cout<<"Archivio cancellato!"<<endl;
    }
    else
        cout<<"Archivio non cancellato."<<endl;
}

void ordinamento()
{
    int trovati=0,primociclo,n=0;
    char s;
    fp=fopen("anagrafe.bin","rb+");
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if (!(fread(&appo,sizeof(appo),1,fp)))
            {

                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else
            {
                primociclo=0;
                appo2[n]=appo;
                ++n;
            }
        }
        //istruzioni di ordinamento, in memoria RAM (appo2), dell'archivio letto da file anagrafe.bin
        cout<<"Ecco l'archivio ordinato per cognome:"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(strcmp(appo2[i].cognome,appo2[j].cognome)>0)
                {
                    appo=appo2[i];
                    appo2[i]=appo2[j];
                    appo2[j]=appo;
                }
            }
            cout<<"Persona #"<<i+1<<endl;
            cout<<"Nome: "<<appo2[i].nome<<endl;
            cout<<"Cognome: "<<appo2[i].cognome<<endl;
            cout<<"Luogo di nascita: "<<appo2[i].luogo_di_nascita<<endl;
            cout<<"Indirizzo: "<<appo2[i].indirizzo<<endl;
            cout<<"Codice fiscale: "<<appo2[i].cod_fisc<<endl;
            cout<<"Giorno di nascita: "<<appo2[i].data_di_nascita[0]<<endl;
            cout<<"Mese di nascita: "<<appo2[i].data_di_nascita[1]<<endl;
            cout<<"Anno di nascita: "<<appo2[i].data_di_nascita[2]<<endl<<endl;
            cout<<"Eta': "<<appo2[i].eta<<endl;
            fclose(fp);
        }
        cout<<endl<<"Vuoi sostituire l'archivio presente su file con il nuovo archivio ordinato (S/N)? ";
        cin>>s;
        if (s=='s' || s=='S')
        {
            //scrittura completa da memoria (appo2) su file (anagrafe.bin) dell'archivio ordinato per cognome
            fp=fopen("anagrafe.bin","wb"); //cancella il vecchio contenuto del file prima di riscriverlo completamente col contenuto ordinato
            for(int i=0; i<n; i++)
            {
                appo=appo2[i];
                fwrite(&appo,sizeof(appo),1,fp);
            }
            cout<<"Archivio sostituito!"<<endl;
        }
        else
            cout<<"Archivio non sostituito."<<endl;
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;
    fclose(fp);
}

void ordinamento_eta()
{
    int trovati=0,primociclo,n=0;
    char s;
    fp=fopen("anagrafe.bin","rb+");
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if (!(fread(&appo,sizeof(appo),1,fp)))
            {

                if (primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else
            {
                primociclo=0;
                appo2[n]=appo;
                ++n;
            }
        }

        cout<<"Ecco l'archivio ordinato per eta':"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(appo2[i].eta>appo2[j].eta)
                {
                    appo=appo2[i];
                    appo2[i]=appo2[j];
                    appo2[j]=appo;
                }
            }
            cout<<"Persona #"<<i+1<<endl;
            cout<<"Nome: "<<appo2[i].nome<<endl;
            cout<<"Cognome: "<<appo2[i].cognome<<endl;
            cout<<"Luogo di nascita: "<<appo2[i].luogo_di_nascita<<endl;
            cout<<"Indirizzo: "<<appo2[i].indirizzo<<endl;
            cout<<"Codice fiscale: "<<appo2[i].cod_fisc<<endl;
            cout<<"Giorno di nascita: "<<appo2[i].data_di_nascita[0]<<endl;
            cout<<"Mese di nascita: "<<appo2[i].data_di_nascita[1]<<endl;
            cout<<"Anno di nascita: "<<appo2[i].data_di_nascita[2]<<endl<<endl;
            cout<<"Eta': "<<appo2[i].eta<<endl<<endl;

            cout<<"L'eta' minima trovata e':"<<appo2[0].eta<<endl;
            cout<<"L'eta' massima trovata e':"<<appo2[n-1].eta<<endl;

            fclose(fp);
        }
        cout<<endl<<"Vuoi sostituire l'archivio presente su file con il nuovo archivio ordinato (S/N)? ";
        cin>>s;
        if (s=='s' || s=='S')
        {
            //scrittura completa da memoria (appo2) su file (anagrafe.bin) dell'archivio ordinato per cognome
            fp=fopen("anagrafe.bin","wb"); //cancella il vecchio contenuto del file prima di riscriverlo completamente col contenuto ordinato
            for(int i=0; i<n; i++)
            {
                appo=appo2[i];
                fwrite(&appo,sizeof(appo),1,fp);
            }
            cout<<"Archivio sostituito!"<<endl;
        }
        else
            cout<<"Archivio non sostituito."<<endl;
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;
    fclose(fp);
}

int main()
{
    int r,n;

    do
    {
        do
        {
            cout<<endl<<"Cosa vuoi fare?"<<endl;
            cout<<"1-Inserire i dati di n persone;"<<endl;
            cout<<"2-Stampare l'intera anagrafe.bin;"<<endl;
            cout<<"3-Stampare l'indirizzo di una persona il cui codice fiscale e' dato in input"<<endl;
            cout<<"4-Ricercare e stampare tutti gli elementi del file che hanno cognome uguale ad una stringa C data in input;"<<endl;
            cout<<"5-Stampare il numero totale degli elementi del file che hanno il cognome uguale a C;"<<endl;
            cout<<"6-Cancellazione completa del contenuto dell'archivio;"<<endl;
            cout<<"7-Ordinamento completo dell'archivio per cognome;"<<endl;
            cout<<"8-Ordinamento completo dell'archivio per eta' + eta' minima e massima"<<endl;
            cout<<"9-Esci"<<endl;
            cout<<endl;
            cin>>r;

            switch(r)
            {
            case 1:
            {
                ins();
                break;
            }
            case 2:
            {
                stampa();
                break;
            }
            case 3:
            {
                trova_indir();
                break;
            }
            case 4:
            {
                stringa1();
                break;
            }
            case 5:
            {
                cognome();
                break;
            }
            case 6:
            {
                cancella_contenuto();
                break;
            }
            case 7:
            {
                ordinamento();
                break;
            }
            case 8:
            {
                ordinamento_eta();
                break;
            }
            case 9:
            {
                cout<<"Fine"<<endl;
                break;
            }
            default:
                cout<<"Errore"<<endl;
            }
        }
        while(r!=9);

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
