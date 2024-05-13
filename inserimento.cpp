#include <iostream>
#include <cstdlib>
using namespace std;
// CASO FUNZIONE CON VALORE DI RITORNO MA NESSUN PARAMETRO
float inserimento()
{
float s;
cout<<"inserisci un numero"<<endl;
cin>>s;
return s;
}

int main()
{
   //SI UTILIZZA COSI'
    int v=inserimento();
        cout<<"il numero che hai inserito e'"<<v;
    return 0;
}
