#include<iostream>
#include<cstdlib>
using namespace std;
int risp,r,i;
float p,s,b;
int main()

{do{
cout<<"Quanti sono gli studenti totali?"<<endl;
cin>>s;

for(i=0;i<s;i++)
{do
{cout<<"Inserisci il risultato finale degli scrutini per ciascun studente(1=Promosso;2=Non promosso;3=Debito) "<<endl;
cin>>r;
if(r==2)
    b++;
if(r<=0 || r>=4)
    cout<<"Errore"<<endl;
if(r>0 && r<4)
    cout<<"Studente numero "<<i<<": "<<r<<endl;
}while(r<=0 || r>=4);
}
cout<<"I bocciati totali sono "<<b<<endl;
cout<<"Gli studenti totali sono "<<s<<endl;
p=(b/s)*100;
cout<<"In percentuale, i bocciati rispetto agli studenti totali sono il/l' "<<p<<"%"<<endl;
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
b=0;
}while(risp==1);
return 0;
}
