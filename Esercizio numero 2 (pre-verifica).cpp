#include<iostream>
#include<cstdlib>
using namespace std;
int risp,vett[30],n,i,esito;

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


for(i=0;i<n-1;i++)
{
if (vett[i]!=vett[i+1])
{
esito=0;
break;
}
else
    esito=1;
}
if(esito==0)
    cout<<"Elementi non tutti uguali"<<endl;
else
    cout<<"Elementi tutti uguali"<<endl;

cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}
