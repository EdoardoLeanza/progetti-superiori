#include<iostream>
using namespace std;
int L_G, T, N_G, C_M, S_M, S1, S_T;
int main ()
{cout<<"Inserisci la lunghezza della galleria (fino a 9 km), il tipo di tritolo richiesto(1 o 2) e il numero di gallerie da realizzare"<<endl;
cin>>L_G>>T>>N_G;
if(T==1)
  {T=40;}
else
  {T=60;}
if(L_G<4)
  {S_M=180*T+600*3+250*100;}
else
  {S_M=250*T+800*3+450*100;}
C_M=0.5*S_M;
S1=C_M+S_M;
if(N_G>=2)
  {S_T=S1*0.9;}
else
  {S_T=S1;}
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
