#include<iostream>
#include<cstdlib>
using namespace std;
int a,i,risp,c;
float cm[30],m,b,h,s;


void inserimento()
{do
{cout<<"Inserisci numero di studenti (max 30)"<<endl;
cin>>s;
if(s<1 || s>30)
    cout<<"Errore"<<endl;
}while(s<1 || s>30);

for(i=0;i<s;i++)
{cout<<"Inserisci altezza dello studente "<<i+1<<" (tra 150 e 190 cm)"<<endl;
do{
cin>>cm[i];
if(cm[i]<150 || cm[i]>190)
    cout<<"Errore, l'altezza deve essere tra 150 e 190 cm"<<endl;
}while(cm[i]<150 || cm[i]>190);
}
}


void stampa()
{for(i=0;i<s;i++)
cout<<"L'altezza dello studente numero "<<i+1<<" e' "<<cm[i]<<endl;
}


void media()
{h=0;
{for(i=0;i<s;i++)
{h=h+cm[i];
    m=h/s;
}
}
cout<<"La media e' "<<m<<" cm"<<endl;
}



void stampa2()
{cout<<"Inserisci un'altezza e mostrero' a chi appartiene"<<endl;
cin>>b;
for(i=0;i<s;i++)
{if(cm[i]==b)
    cout<<"L'altezza "<<b<<" appartiene allo studente numero "<<i+1<<endl;
}
}


void stampa3()
{cout<<"Inserisci il numero d'ordine di uno studente e mostrero' la sua altezza"<<endl;
cin>>c;
if(c<1 || c>30)
    cout<<"Errore, scelta errata"<<endl;
else
    cout<<"Nel numero "<<c<<" l'altezza dello studente e' di "<<cm[c-1]<<" cm"<<endl;
}


void sup180()
{
for(i=0;i<180;i++)
    if(cm[i]==i)
        cout<<"I 180 cm sono stati superati dallo studente numero "<<i+1<<endl;
}


int main()
{do
{
    inserimento();
do{
cout<<"Cosa vuoi fare? (1= Inserimento; 2= Stampa; 3= Media; 4= Altezza/Studente; 5= Studente/Altezza; 6= Altezza superiore a 180cm)"<<endl;
cin>>a;
switch(a)
{case 1: inserimento();break;
 case 2: stampa();break;
 case 3: media();break;
 case 4: stampa2();break;
 case 5: stampa3();break;
 case 6: sup180();break;
 default: cout<<"Scelta errata"<<endl;
 }
 }while(a!=6);
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}
