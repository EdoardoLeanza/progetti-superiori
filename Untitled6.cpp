#include<iostream>
using namespace std;
int L_P, T_D, S_T, S_M;
int main ()
{cout<<"Inserisci la lunghezza del ponte in mq (fino a 25) e il tipo di decorazione (1 o 2)"<<endl;
cin>>L_P>>T_D;
if(T_D==1)
  {T_D=40;}
else
  {T_D=50;}
if(L_P<=15)
  {S_M=2000*3+560*10+T_D*250;}
else
  {S_M=2500*3+800*10+T_D*450;}
S_T=1.3*S_M;
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
