#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;




int main()
{
    int n;
    float v;

    struct rec
    {
        char nome[10];
        char cognome[20];
        int eta;
        float reddito;
    } ditta;

do{
    cout<<"Inserisci numero di dipendenti"<<endl;
    cin>>n;
    if(n<1)
        cout<<"Errore"<<endl;
}while(n<1);

struct rec archivio [n];

for(int i=0;i<n;i++)
{
do{

        do{
            fflush(stdin);
            cout<<"Inserisci nome dipendente numero "<<i+1<<endl;
            gets(archivio[i].nome);
                if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>10)
                    cout<<"Errore"<<endl;
        }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>10);

        do{
            cout<<"Inserisci cognome dipendente numero "<<i+1<<endl;
            gets(archivio[i].cognome);
                if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20)
                    cout<<"Errore"<<endl;
        }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20);

        do{
            cout<<"Inserisci eta' dipendente numero "<<i+1<<endl;
                cin>>archivio[i].eta;
                if((archivio[i].eta)<0 || (archivio[i].eta)>67)
                    cout<<"Errore"<<endl;
        }while((archivio[i].eta)<0 || (archivio[i].eta)>67);

                do{
            cout<<"Inserisci reddito dipendente numero "<<i+1<<endl;
                cin>>archivio[i].reddito;
                if((archivio[i].reddito)<0)
                    cout<<"Errore"<<endl;
        }while((archivio[i].reddito)<0);

}while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>10 && strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>20 && (archivio[i].eta)<0 || (archivio[i].eta)>67 && (archivio[i].reddito)<0);
}

for(int i=0;i<n;i++)
{
    cout<<"Il nome del dipendente "<<i+1<<" e': "<<archivio[i].nome<<endl;
    cout<<"Il cognome del dipendente "<<i+1<<" e': "<<archivio[i].cognome<<endl;
    cout<<"L'eta' del dipendente "<<i+1<<" e': "<<archivio[i].eta<<endl;
    cout<<"Il reddito del dipendente "<<i+1<<" e': "<<archivio[i].reddito<<endl;
}

int k=0;
cout<<"Inserisci valore"<<endl;
cin>>v;
for(int i=0;i<n;i++)
{
    if(archivio[i].reddito>v)
        k++;
}
cout<<k<<" dipendenti hanno un reddito maggiore a "<<v<<endl;

float h=0,m;
{
    for(int i=0;i<n;i++)
    {
        h=h+archivio[i].reddito;
        m=h/n;
    }
}
cout<<"La media dei redditi dei dipendenti e': "<<m<<endl;

int l=0;
for(int i=0;i<n;i++)
{
    if(archivio[i].reddito<m)
        l++;
cout<<"I dipendenti che hanno un reddito inferiore alla media sono i seguenti: "<<archivio[i].nome<<" "<<archivio[i].cognome<<endl;
}
cout<<l<<" dipendenti hanno un reddito minore alla media (che e' "<<m<<")"<<endl;



char appo[20];
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
{
        if(archivio[i].cognome>archivio[j].cognome)
            {
                //appo=archivio[i].cognome;
                strcpy(appo,archivio[i].cognome);
                //archivio[i].cognome=archivio[j].cognome;
                strcpy(archivio[i].cognome,archivio[j].cognome);
                //archivio[j].cognome=appo;
                strcpy(archivio[j].cognome,appo);
}
}
cout<<"L'ordinamento dei dipendenti per cognome e' il seguente: "<<archivio[i].cognome<<endl;
}





return 0;
}
