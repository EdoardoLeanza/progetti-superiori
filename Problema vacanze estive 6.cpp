#include<iostream>
#include<cstdlib>
using namespace std;
int n1,n2,i,risp;
int main()

{do
{do
{
cout<<"Inserisci un numero  intero compreso tra 10 e 20 (estremi compresi) "<<endl;
cin>>n1;
if(n1<10 || n1>20)
    cout<<"Errore,riprova"<<endl;
}while(n1<10 || n1>20);

cout<<"Inserisci un qualsiasi altro numero intero"<<endl;
cin>>n2;
if(n2==n1)
    cout<<"I due numeri sono uguali: "<<n1<<" - "<<n2<<endl;
if(n1>n2)
    cout<<"Ecco i due numeri in ordine decrescente: "<<n1<<" - "<<n2<<endl;
else if(n2>n1)
    cout<<"Ecco i due numeri in ordine decrescente: "<<n2<<" - "<<n1<<endl;

cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}


