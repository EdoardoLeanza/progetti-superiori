#include<iostream>
#include<cstdlib>
using namespace std;
int a,b,i;
int main ()
{do{    cout<<"Inserisci un numero"<<endl;
        cin>>a;
        if( (a%2>0) || (a<0)  )
            cout<<"Errore"<<endl;
        if( (a%3>0) || (a>0))
            cout<<"Errore"<<endl;
        }while( (a%2<0) || (a%3<0) );
for(i=0;i=a;i++)

cout<<"La somma di tutti i valori inseriti escluso quello che ha violato le condizioni e' "<<b<<endl;
system ("PAUSE");
return 0;}
