#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char codice[3], nome[20], codice_regione[3], nome_regione[20];
    int pop;
} appo, appo2[100];
FILE *fp;

void ins()
{
    fp=fopen("provincia.txt","a");

    do
    {
        cout<<"Inserisci codice provincia"<<endl;
        fflush(stdin);
        gets(appo.codice);
        if(strlen(appo.codice)<1 || strlen(appo.codice)>2)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.codice)<1 || strlen(appo.codice)>2);

    do
    {
        cout<<"Inserisci nome provincia"<<endl;
        fflush(stdin);
        gets(appo.nome);
        if(strlen(appo.nome)<1 || strlen(appo.nome)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.nome)<1 || strlen(appo.nome)>20);

    do
    {
        cout<<"Inserisci codice regione della provincia"<<endl;
        fflush(stdin);
        gets(appo.codice_regione);
        if(strlen(appo.codice_regione)<1 || strlen(appo.codice_regione)>2)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.codice_regione)<1 || strlen(appo.codice_regione)>2);

    do
    {
        cout<<"Inserisci nome regione della provincia"<<endl;
        fflush(stdin);
        gets(appo.nome_regione);
        if(strlen(appo.nome_regione)<1 || strlen(appo.nome_regione)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(appo.nome_regione)<1 || strlen(appo.nome_regione)>20);

    do
    {
        cout<<"Inserisci popolazione provincia"<<endl;
        fflush(stdin);
        cin>>appo.pop;
        if(appo.pop<1)
            cout<<"Errore"<<endl;
    }
    while(appo.pop<1);

    fwrite(&appo,sizeof(appo),1,fp);
    fclose(fp);
}

void stampa()
{
    int primociclo;
    fp=fopen("provincia.txt","r");
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
                cout<<"Codice regione: "<<appo.codice_regione<<endl;
                cout<<"Nome regione: "<<appo.nome_regione<<endl;
                cout<<"Popolazione: "<<appo.pop<<endl<<endl;
            }
        }
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;

    fclose(fp);
}

void ordinamento()
{
    int trovati=0,primociclo,n=0;
    char s;
    fp=fopen("provincia.txt","r");

    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if(fread(&appo,sizeof(appo),1,fp)==0)
            {

                if(primociclo==1)
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

        cout<<"Ecco l'archivio ordinato per popolazione:"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(appo2[i].pop>appo2[j].pop)
                {
                    appo=appo2[i];
                    appo2[i]=appo2[j];
                    appo2[j]=appo;
                }
            }
            cout<<"Provincia #"<<i+1<<endl;
            cout<<"Codice: "<<appo2[i].codice<<endl;
            cout<<"Nome: "<<appo2[i].nome<<endl;
            cout<<"Codice regione: "<<appo2[i].codice_regione<<endl;
            cout<<"Nome regione: "<<appo2[i].nome_regione<<endl;
            cout<<"Popolazione: "<<appo2[i].pop<<endl<<endl;
            fclose(fp);
        }
        cout<<endl<<"Vuoi sostituire l'archivio presente su file con il nuovo archivio ordinato (S/N)? ";
        cin>>s;
        if (s=='s' || s=='S')
        {
            fp=fopen("provincia.txt","w");
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

void media1()
{

    int i=0, n=0, primociclo=0;
    float h=0, m=0;
    char reg[20];
    fp=fopen("provincia.txt","r");

    do
    {
        cout<<"Inserisci nome regione"<<endl;
        fflush(stdin);
        gets(reg);
        if(strlen(reg)<1 || strlen(reg)>20)
            cout<<"Errore"<<endl;
    }
    while(strlen(reg)<1 || strlen(reg)>20);

    cout<<"La popolazione media delle provincie della regione "<<reg<<" sono:"<<endl;
    if (fp!=NULL)
    {
        primociclo=1;
        while(true)
        {
            if(fread(&appo,sizeof(appo),1,fp)==0)
            {

                if(primociclo==1)
                {
                    cout<<"Archivio vuoto"<<endl;
                }
                break;
            }
            else
            {
                primociclo=0;
                if(strcmp(appo.nome_regione,reg)==0)
                {
                    h=h+appo.pop;
                    i++;
                    m=h/i;
                }
            }
        }
        cout<<m<<endl;
    }
    else
        cout<<"File di archivio inesistente! E' necessario effettuare un primo inserimento."<<endl;

    fclose(fp);
}

void media2()
{
    int i=0, n=0, primociclo=0;
    float h=0, m=0;
    fp=fopen("provincia.txt","r");

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
                h=h+appo.pop;
                i++;
            }
        }
        m=h/i;
        cout<<"La popolazione media di tutte le provincie e' "<<m<<endl;
        fclose(fp);


        fp=fopen("provincia.txt","r");
        cout<<"Le provincie con una popolazione superiore alla media sono: "<<endl;
        while(true)
        {
            if((fread(&appo,sizeof(appo),1,fp))==0)
            {
                break;
            }
            else
            {
                if(appo.pop>m)
                    cout<<appo.nome<<endl;
            }
        }
        fclose(fp);


        fp=fopen("provincia.txt","r");
        cout<<"Le provincie con una popolazione inferiore alla media sono: "<<endl;
        while(true)
        {
            if ((fread(&appo,sizeof(appo),1,fp))==0)
            {
                break;
            }
            else
            {
                if(appo.pop<m)
                    cout<<appo.nome<<endl;
            }
        }
        fclose(fp);
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
        cout<<"1-Inserimento"<<endl;
        cout<<"2-Stampa"<<endl;
        cout<<"3-Ordinamento per popolazione e sostituzione"<<endl;
        cout<<"4-Popolazione media"<<endl;
        cout<<"5-Popolazione media di tutte le provincie"<<endl;
        cout<<"6-Esci"<<endl;
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
            ordinamento();
            break;
        case 4:
            media1();
            break;
        case 5:
            media2();
            break;
        case 6:
            cout<<"Fine"<<endl;
            break;
        default:
            cout<<"Errore"<<endl;
            break;
        }
    }
    while(r!=6);
    fclose(fp);
}
