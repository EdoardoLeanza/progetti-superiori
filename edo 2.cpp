#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char codice[5], nome[10], cognome[10], qualifica[10], reparto[10];
    float reddito;
} appo;

FILE *fp;

void ins()
{
    fp=fopen("azienda.txt","a");

    do
    {
        cout<<"Inserisci codice dipendente"<<endl;
        fflush(stdin);
        gets(appo.codice);
        if(strlen(appo.codice)<1 || strlen(appo.codice)>5)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.codice)<1 || strlen(appo.codice)>5);

    do
    {
        cout<<"Inserisci nome dipendente"<<endl;
        fflush(stdin);
        gets(appo.nome);
        if(strlen(appo.nome)<1 || strlen(appo.nome)>10)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.nome)<1 || strlen(appo.nome)>10);

    do
    {
        cout<<"Inserisci cognome dipendente"<<endl;
        fflush(stdin);
        gets(appo.cognome);
        if(strlen(appo.cognome)<1 || strlen(appo.cognome)>10)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.cognome)<1 || strlen(appo.cognome)>10);

    do
    {
        cout<<"Inserisci qualifica dipendente"<<endl;
        fflush(stdin);
        gets(appo.qualifica);
        if(strlen(appo.qualifica)<1 || strlen(appo.qualifica)>10)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.qualifica)<1 || strlen(appo.qualifica)>10);

    do
    {
        cout<<"Inserisci reparto dipendente"<<endl;
        fflush(stdin);
        gets(appo.reparto);
        if(strlen(appo.reparto)<1 || strlen(appo.reparto)>10)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.reparto)<1 || strlen(appo.reparto)>10);

    do
    {
        cout<<"Inserisci reddito dipendente"<<endl;
        fflush(stdin);
        cin>>appo.reddito;
        if(appo.reddito<0)
            cout<<"Errore"<<endl;
    }
    while(appo.reddito<0);

    fwrite(&appo, sizeof(struct rec1), 1, fp);
    fclose(fp);
}

void stampa()
{
    char reparto[10];
    fp=fopen("azienda.txt","r");

    fread(&appo, sizeof(struct rec1), 1, fp);

    if(fp!=NULL)
    {
        do
        {
            cout<<"Inserisci reparto"<<endl;
            fflush(stdin);
            gets(reparto);
            if(strlen(reparto)<1 || strlen(reparto)>10)
                cout<<"Errore"<<endl;
        }
        while(strlen(reparto)<1 || strlen(reparto)>10);

        while(!feof(fp))
        {
            if(strcmp(appo.reparto, reparto)==0)
                cout<<appo.qualifica<<endl;
            fread(&appo, sizeof(struct rec1), 1, fp);
        }
    }
    else
        cout<<"Archivio vuoto! Fare almeno un inserimento"<<endl;
    fclose(fp);
}

void media()
{
    int i=0;
    float m=0, h=0;
    fp=fopen("azienda.txt","r");

    fread(&appo, sizeof(struct rec1), 1, fp);
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            h=h+appo.reddito;
            i++;
            fread(&appo, sizeof(struct rec1), 1, fp);
        }

        if(i!=0)
        {
            m=h/i;
            cout<<m<<endl;
        }
    }
    else
        cout<<"Archivio vuoto! Fare almeno un inserimento"<<endl;
    fclose(fp);
}

void stampa2()
{
    int x=0;
    fp=fopen("azienda.txt","r");

    fread(&appo, sizeof(struct rec1), 1, fp);

    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            if(x<appo.reddito)
                x=appo.reddito;
            fread(&appo, sizeof(struct rec1), 1, fp);
        }
        fclose(fp);

        fp=fopen("azienda.txt","r");
        fread(&appo, sizeof(struct rec1), 1, fp);

        while(!feof(fp))
        {
            if(x==appo.reddito)
                cout<<appo.codice<<endl;
            fread(&appo, sizeof(struct rec1), 1, fp);
        }
        fclose(fp);
    }
    else
        cout<<"Archivio vuoto! Fare almeno un inserimento"<<endl;
    fclose(fp);
}

void stampatutto()
{
    int primociclo;
    fp=fopen("azienda.txt","r");
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if ((fread(&appo,sizeof(appo),1,fp))==0)
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
                cout<<endl<<"Codice: "<<appo.codice<<endl;
                cout<<"Nome: "<<appo.nome<<endl;
                cout<<"Cognome: "<<appo.cognome<<endl;
                cout<<"Qualifica: "<<appo.qualifica<<endl;
                cout<<"Reparto: "<<appo.reparto<<endl;
                cout<<"Reddito: "<<appo.reddito<<endl;
            }
        }
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;

    fclose(fp);
}

int main()
{
    int r;
    do
    {
        cout<<"Cosa vuoi fare?"<<endl;
        cout<<"1- Inserimento"<<endl;
        cout<<"2- Stampa delle qualifiche"<<endl;
        cout<<"3- Media del reddito"<<endl;
        cout<<"4- Stampa codice del dipendente con il reddito piu' alto"<<endl;
        cout<<"5- Stampa tutto"<<endl;
        cout<<"6- Esci"<<endl;
        cin>>r;

        switch(r)
        {
        case 1:
            ins();
            break;
        case 2:
            stampa();
            break;
        case 3:
            media();
            break;
        case 4:
            stampa2();
            break;
        case 5:
            stampatutto();
            break;
        case 6:
            cout<<"Fine"<<endl;;
            break;
        default:
            cout<<"Errore"<<endl;
            break;
        }
    }
    while(r!=6);
    fclose(fp);
}
