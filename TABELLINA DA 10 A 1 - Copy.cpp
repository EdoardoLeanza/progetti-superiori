#include<iostream>
#include<cstdlib>
using namespace std;
int a,b,risp;
int main ()
{do{       cout<<"Inserisci il numero"<<endl;
        cin>>a;
        for(b=10;b>0;b--)
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        system ("PAUSE");
cout<<"Vuoi continuare?(1=No,2=Si)"<<endl;
cin>>risp;}
while(risp==2);
return 0;}




