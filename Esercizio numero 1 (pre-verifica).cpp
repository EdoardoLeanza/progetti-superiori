#include<iostream>
#include<cstdlib>
using namespace std;
int risp,vett[30],n,i,b,h;

int main()
{do
{do
{
cout<<"Inserisci totale di numeri (max 30)"<<endl;
cin>>n;
if(n<1 || n>30)
    cout<<"Errore"<<endl;
}while(n<1 || n>30);

for(i=0;i<n;i++)
{
    cout<<"Inserisci il "<<i+1<<" numero (intero)"<<endl;
    cin>>vett[i];
}

{cout<<"Inserisci un numero da controllare e diro' se c'e' o meno nel vettore"<<endl;
cin>>b;
for(i=0;i<n;i++)
{
if (vett[i]==b)
{      h=0;
       break;
}
else
    h=1;
}
if(h==0)
    cout<<"Il numero "<<b<<" e' stato trovato"<<endl;
else if(h==1)
    cout<<"Il numero "<<b<<" non e' stato trovato"<<endl;
}
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}
