//Programma che inserisce i dati anagrafici di una persona e poi li stampa a schermo
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    struct rec
    {
        char nome[25],cognome[25], datan[12], luogo_n[30], indirizzo[30], n_tele[15], email[30];
        float altezza, peso;
        int eta;
    }dati;

do
{
    cout<<"Inserisci il nome (max 25 caratteri)"<<endl;
    fflush(stdin);
    gets(dati.nome);

    cout<<"Inserisci il cognome (max 25 caratteri)"<<endl;
    gets(dati.cognome);

    cout<<"Inserisci l'eta'"<<endl;
    cin>>dati.eta;

    cout<<"Inserisci la data di nascita (max 12 caratteri e inserire il mese usando due lettere -->es.: Fe)"<<endl;
     fflush(stdin);
    gets(dati.datan);

    cout<<"Inserisci il luogo di nascita (max 30 caratteri)"<<endl;
    gets(dati.luogo_n);

    cout<<"Inserisci l'indirizzo (max 30 caratteri)"<<endl;
    gets(dati.indirizzo);

    cout<<"Inserisci il numero di telefono (max 15 caratteri)"<<endl;
    gets(dati.n_tele);

    cout<<"Inserisci l'e-mail (max 30 caratteri)"<<endl;
    gets(dati.email);

    cout<<"Inserisci l'altezza"<<endl;
    cin>>dati.altezza;

    cout<<"Inserisci il peso"<<endl<<endl;
    cin>>dati.peso;

}while(strlen(dati.nome)<0 || strlen(dati.nome)>25 && strlen(dati.cognome)<0 || strlen(dati.cognome)>25 && dati.eta<0 && strlen(dati.datan)<0 || strlen(dati.datan)>12 && strlen(dati.luogo_n)<0 || strlen(dati.luogo_n)>30 && strlen(dati.indirizzo)<0 || strlen(dati.indirizzo)>30 && strlen(dati.n_tele)<0 || strlen(dati.n_tele)>15 && strlen(dati.email)<0 || strlen(dati.email)>30 && dati.altezza<0 && dati.peso<0);


cout<<"Il nome della persona e': "<<dati.nome<<endl;
cout<<"Il cognome della persona e': "<<dati.cognome<<endl;
cout<<"L'eta' della persona e': "<<dati.eta<<endl;
cout<<"La data di nascita della persona e': "<<dati.datan<<endl;
cout<<"Il luogo di nascita della persona e': "<<dati.luogo_n<<endl;
cout<<"L'indirizzo della persona e': "<<dati.indirizzo<<endl;
cout<<"Il numero di telefono della persona e': "<<dati.n_tele<<endl;
cout<<"L'e-mail della persona e': "<<dati.email<<endl;
cout<<"L'altezza della persona e': "<<dati.altezza<<endl;
cout<<"Il peso della persona e': "<<dati.peso<<endl;

return 0;
}
