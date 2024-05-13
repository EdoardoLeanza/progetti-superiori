#include<iostream>
#include<cstdlib>
using namespace std;
int n,p=1,risp,i;
int main()
{do
{do
{
cout<<"Inserisci un numero  intero compreso tra 1 e 12 (estremi compresi) "<<endl;
cin>>n;
if(n<1 || n>12)
    cout<<"Errore,riprova"<<endl;
}while(n<1 || n>12);


for(i=2;i<=n;++i)
   p=p*i;


cout<<"Il prodotto dei primi n numeri interi di "<<n<<" e' "<<p<<endl;
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
p=1;
}while(risp==1);
return 0;
}


