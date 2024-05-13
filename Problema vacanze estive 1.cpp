#include<iostream>
#include<cstdlib>
using namespace std;
int scelta, risp;
float s,v,p;

void prelievo()
{   cout<<"Quanto vuoi prelevare?"<<endl;
    cin>>p;
    s=s-p;
    cout<<"Il saldo finale e' "<<s<<endl;
}

void versamento()
{   cout<<"Quanto vuoi versare?"<<endl;
    cin>>v;
    s=v+s;
    cout<<"Il saldo finale e' "<<s<<endl;
}

int main()
{do{ cout<<"Inserisci il saldo iniziale"<<endl;
     cin>>s;
     cout<<"Scegli tra: 1-prelievo e 2-versamento"<<endl;
     cin>>scelta;
switch(scelta)

do{case 1:prelievo();break;
   case 2:versamento();break;
   default:cout<<"Scelta errata"<<endl;
   }while(scelta!=2);
cout<<"Vuoi continuare?(1=si;2=no)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}
