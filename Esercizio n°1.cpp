#include<iostream>
#include<cstdlib>
using namespace std;
int a,i,c;
float pe[100],m,h,f,per;

void inserimento()
{do
{cout<<"Inserisci numero di persone (max 100)"<<endl;
cin>>per;
if(per<1 || per>100)
    cout<<"Errore"<<endl;
}while(per<1 || per>100);

for(i=0;i<per;i++)
{cout<<"Inserisci altezza della persona "<<i+1<<" (tra 100 e 250 cm)"<<endl;
do{
cin>>pe[i];
if(pe[i]<100 || pe[i]>250)
    cout<<"Errore, l'altezza deve essere tra 100 e 250 cm"<<endl;
}while(pe[i]<100 || pe[i]>250);
}
}


void cerca1()
{
cout<<"Inserisci il numero della persona e diro' a chi appartiene"<<endl;
cin>>c;
if(c<0 || c>100)
    cout<<"Errore, scelta errata"<<endl;
else
    cout<<"La persona numero "<<c<<" ha un'altezza di "<<pe[c-1]<<" cm"<<endl;

}

/*
void cerca2()
{cout<<"Inserisci un'altezza e mostrero' a chi appartiene"<<endl;
cin>>f;
for(i=0;i<per;i++)
{if(pe[i]==f)
    cout<<"L'altezza "<<f<<" appartiene alla persona numero "<<i+1<<endl;
}


cout<<"Il totale dei trovati e' "<<  <<endl;
}
*/


void media()

{h=0;
{for(i=0;i<per;i++)
{h=h+pe[i];
    m=h/per;
}
}
cout<<"La media e' "<<m<<" cm"<<endl;
}


//void altezza()
//{



//cout<<"L'altezza minima trovata e' "<<  <<" (e appatiene alla persona numero "<<  <<"), mentre la massima e' "<<  <<" (e appartiene alla persona numero "<<  <<")"<<endl;
//}



int main()
{do
{
    inserimento();
do{
do{
cout<<"Cosa vuoi fare? (1= Inserimento; 2= Numero/Altezza; 3= Altezza/Numero e totale dei trovati; 4= Media altezze; 5= Visualizzare altezza min. e max. e i numeri delle persone; 6=Esci)"<<endl;
cin>>a;
if(a<1 || a>6)
        cout<<"Errore"<<endl;
}while(a<1 || a>6);
switch(a)
{case 1: inserimento();break;
case 2: cerca1;break;
//case 3: cerca2;break;
case 4: media;break;
//case 5: altezza;break;
case 6: break;
default: cout<<"Scelta errata"<<endl;
}
}while(a>0 && a<6);
}while(a<6);
return 0;
}
