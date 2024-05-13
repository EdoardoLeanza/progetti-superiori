#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct myrec
{
    char nome[20], cognome[20], cod_fisc[16];
} appo;

void leggi_stampa()
{
    FILE *fp;
    int primociclo;
    fp=fopen("persone.bin","rb");
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if (!(fread(&appo,56,1,fp)))
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
                cout<<"Codice Fiscale: "<<appo.cod_fisc<<endl;
            }
        }
    }
    else
    {
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;
    }
    fclose(fp);
}

void inserisci_scrivi()
{
    FILE *fp;
    int s;
    fp=fopen("persone.bin","ab");
    do
    {
        do{
            cout<<"Nome: "<<endl;
            fflush(stdin);
            gets(appo.nome);
            if(strcmp(appo.nome,"")==0)
                cout<<"errore, campo vuoto!"<<endl;
        }while(strcmp(appo.nome,"")==0);

        do{
            cout<<"Cognome: "<<endl;
            fflush(stdin);
            gets(appo.cognome);
            if(strcmp(appo.cognome,"")==0)
                cout<<"errore, campo vuoto!"<<endl;
        }while(strcmp(appo.cognome,"")==0);

        do{
            cout<<"Codice fiscale: "<<endl;
            fflush(stdin);
            gets(appo.cod_fisc);
            if(strcmp(appo.cod_fisc,"")==0)
                cout<<"errore, campo vuoto!"<<endl;
        }while(strcmp(appo.cod_fisc,"")==0);

        fwrite(&appo,56,1,fp);

        cout<<endl<<"Inserire un altro nominativo (1=si 2=no)? ";
        cin>>s;
    }while (s==1);

    fclose(fp);
}

void cancella_contenuto()
{
    FILE *fp;
    char s;
    cout<<"SEI SICURO DI VOLER CANCELLARE COMPLETAMENTE IL CONTENUTO DELL'ARCHIVIO (S/N)???";
    cin>>s;
    if (s=='s' || s=='S')
    {
        fp=fopen("persone.bin","wb");
        fclose(fp);
        cout<<"Archivio cancellato!"<<endl;
    }
    else
        cout<<"Archivio non cancellato."<<endl;
}

int main()
{
    int s;
    do
    {
        cout<<endl<<"1 - Inserimento in archivio + scrittura su file (tramite fwrite)"<<endl;
        cout<<"2 - Lettura completa archivio da file (tramite fread) + Visualizzazione"<<endl;
        cout<<"3 - Cancellazione completa contenuto file"<<endl;
        cout<<"0 - Esci"<<endl;
        cin>>s;
        while (s<0 || s>3 )
        {
            cout<<"errore!"<<endl;
            cin>>s;
        }
        switch(s)
        {
        case 1:
        {
            inserisci_scrivi();
            break;
        }
        case 2:
        {
            leggi_stampa();
            break;
        }
        case 3:
        {
            cancella_contenuto();
            break;
        }
        }

    }
    while (s>=1 && s<=3);
    return 0;
}
