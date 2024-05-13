//Programma che inserisce i dati anagrafici di 3 dipendenti e poi li stampa a schermo
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int ricerca(char a, char b[])
{
    int trovato=0, h=0,i;

    for(i=0;i<strlen(b[]);i++)
    {
        if(b[i]=='@')
            trovato=1;
    }

    return trovato;
}

int main()
{
    struct rec
    {
        char nome[25],cognome[25], datan[12], luogo_n[30], indirizzo[30], n_tele[15], email[30];
        float altezza, peso;
        int eta;
    }dati;

struct rec archivio [3];

for(int i=0;i<3;i++)
{

do
{
    do{
    fflush(stdin);
    cout<<"Inserisci il nome (max 25 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].nome);
    if(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>25)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>25);

    do{
    fflush(stdin);
    cout<<"Inserisci il cognome (max 25 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].cognome);
    if(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>25)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>25);


    do{
    cout<<"Inserisci eta' dipendente numero "<<i+1<<endl;
    cin>>archivio[i].eta;
    if((archivio[i].eta)<0)
                    cout<<"Errore"<<endl;
    }while((archivio[i].eta)<0);

    do{
    fflush(stdin);
    cout<<"Inserisci la data di nascita, in formato dd/mm/aaaa, del dipendente numero "<<i+1<<endl;
    gets(archivio[i].datan);
    if(strlen(archivio[i].datan)<0 || strlen(archivio[i].datan)>12)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].datan)<0 || strlen(archivio[i].datan)>12);

    do{
    fflush(stdin);
    cout<<"Inserisci il luogo di nascita (max 30 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].luogo_n);
    if(strlen(archivio[i].luogo_n)<0 || strlen(archivio[i].luogo_n)>30)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].luogo_n)<0 || strlen(archivio[i].luogo_n)>30);

    do{
    fflush(stdin);
    cout<<"Inserisci l'indirizzo (max 30 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].indirizzo);
    if(strlen(archivio[i].indirizzo)<0 || strlen(archivio[i].indirizzo)>30)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].indirizzo)<0 || strlen(archivio[i].indirizzo)>30);


    do{
    fflush(stdin);
    cout<<"Inserisci il numero di telefono (max 15 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].n_tele);
    if(strlen(archivio[i].n_tele)<0 || strlen(archivio[i].n_tele)>15)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].n_tele)<0 || strlen(archivio[i].n_tele)>15);

    do{
    fflush(stdin);
    cout<<"Inserisci l'e-mail (max 30 caratteri) del dipendente numero "<<i+1<<endl;
    gets(archivio[i].email);
    if(strlen(archivio[i].email)<0 || strlen(archivio[i].email)>30)
                    cout<<"Errore"<<endl;
    }while(strlen(archivio[i].email)<0 || strlen(archivio[i].email)>30);

    do{
    cout<<"Inserisci altezza dipendente numero "<<i+1<<endl;
    cin>>archivio[i].altezza;
    if((archivio[i].altezza)<0)
                    cout<<"Errore"<<endl;
    }while((archivio[i].altezza)<0);

    do{
    fflush(stdin);
    cout<<"Inserisci peso dipendente numero "<<i+1<<endl;
    cin>>archivio[i].peso;
    if((archivio[i].peso)<0)
                    cout<<"Errore"<<endl;
    }while((archivio[i].peso)<0);

}while(strlen(archivio[i].nome)<0 || strlen(archivio[i].nome)>25 && strlen(archivio[i].cognome)<0 || strlen(archivio[i].cognome)>25 && (archivio[i].eta)<0 && strlen(archivio[i].datan)<0 || strlen(archivio[i].datan)>12 && strlen(archivio[i].luogo_n)<0 || strlen(archivio[i].luogo_n)>30 && strlen(archivio[i].indirizzo)<0 || strlen(archivio[i].indirizzo)>30 && strlen(archivio[i].n_tele)<0 || strlen(archivio[i].n_tele)>15 && strlen(archivio[i].email)<0 || strlen(archivio[i].email)>30 && (archivio[i].altezza)<0 && (archivio[i].peso)<0);
}

for(int i=0;i<3;i++)
{
    cout<<"Il nome del dipendente "<<i+1<<" e': "<<archivio[i].nome<<endl;
    cout<<"Il cognome del dipendente "<<i+1<<" e': "<<archivio[i].cognome<<endl;
    cout<<"L'eta' del dipendente "<<i+1<<" e': "<<archivio[i].eta<<endl;
    cout<<"La data di nascita del dipendente "<<i+1<<" e': "<<archivio[i].datan<<endl;
    cout<<"Il luogo di nascita del dipendente "<<i+1<<" e': "<<archivio[i].luogo_n<<endl;
    cout<<"L'indirizzo del dipendente "<<i+1<<" e': "<<archivio[i].indirizzo<<endl;
    cout<<"Il numero di telefono del dipendente "<<i+1<<" e': "<<archivio[i].n_tele<<endl;
    cout<<"L'e-mail del dipendente "<<i+1<<" e': "<<archivio[i].email<<endl;
    cout<<"L'altezza del dipendente "<<i+1<<" e': "<<archivio[i].altezza<<endl;
    cout<<"Il peso del dipendente "<<i+1<<" e': "<<archivio[i].peso<<endl;
}

return 0;
}
