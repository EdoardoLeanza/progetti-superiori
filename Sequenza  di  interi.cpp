//Scrivere  un  programma che  chiede  all’utente  di  inserire  una  sequenza  di  interi  (chiedendo  prima  quanti  numeri  voglia  inserire)  e  poi,  al  termine  dell’inserimento
//dell’intera sequenza, stampa "Tutti positivi e pari" se i numeri inseriti sono tutti positivi e pari, altrimenti stampa "NO".
#include<iostream>
#include<cstdlib>
using namespace std;
int a,b=0,q,c;
int main ()
{       cout<<"Quanti numeri vuoi inserire?"<<endl;
        cin>>q;
        cout<<"Inserisci i "<<q<<" numeri interi"<<endl;
        for(b=1;b<=q;b++)
            {
                cin>>a;
                if( (a%2>0) || (a<0)  )
                    c=1;
            }


if(c==0)
    cout<<"Tutti positivi e pari"<<endl;
else if(c!=0)
    cout<<"No"<<endl;
system ("PAUSE");
return 0;}
