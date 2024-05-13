#include<iostream>
#include<cstdlib>
using namespace std;
int risp,i,d,di,op,im;
float s,st,s1,s2,s3;


int main()
{do{cout<<"Quanti sono i dipendenti totali?"<<endl;
    cin>>d;
do{ cout<<"Quanti sono gli operai, gli impiegati e i dirigenti?"<<endl;
    cin>>op>>im>>di;
    if(op+im+di!=d)
        cout<<"Numero di dipendenti totali errato"<<endl;
    }while(op+im+di!=d);
cout<<"Quanto guadagna un operaio, un impiegato e un dirigente? (In Euro)"<<endl;
cin>>s1>>s2>>s3;
st=s1*op+s2*im;
cout<<"Somma stipendi operai ed impiegati: "<<st<<" Euro"<<endl;
cout<<"Vuoi continuare?(1=Si;2=No)"<<endl;
cin>>risp;
}while(risp==1);
return 0;
}
