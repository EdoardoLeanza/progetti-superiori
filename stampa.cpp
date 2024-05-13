#include <iostream>
#include <cstdlib>
using namespace std;
// CASO FUNZIONE SENZA VALORI DI RITORNO MA PARAMETRI
float stampa(float s)
{
cout<<"il numero da visualizzare e' "<<s<<endl;
return 0;
}

int main()
{
   float k;

   cout<<"inserisci il numero da visualizzare"<<endl;
   cin>>k;
   //SI UTILIZZA COSI'
   stampa(k);

   return 0;
}
