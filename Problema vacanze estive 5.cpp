#include<iostream>
#include<cstdlib>
using namespace std;
int n,i,c,risp;
int main()

{do
{do
{
cout<<"Inserisci un numero  intero compreso tra 1 e 100 (estremi compresi) "<<endl;
cin>>n;
if(n<1 || n>100)
    cout<<"Errore,riprova"<<endl;
}while(n<1 || n>100);

for(i=n;i>=1;--i)
{
    c=i*i*i;
    cout<<"Il cubo di "<<i<<" e' "<<c<<endl;
}

cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}


