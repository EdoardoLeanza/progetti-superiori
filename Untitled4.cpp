#include<iostream>
using namespace std;
int N_C, M, N_G, S_T, S1, S2, S3;
int main ()
{cout<<"Inserisci il numero dei componenti del gruppo, il mese scelto (3,4 o 5) e il numero di giorni richiesti"<<endl;
cin>>N_C>>M>>N_G;
switch(M)
{case 3: S1=80*N_C*N_G;break;
 case 4: S1=90*N_C*N_G;break;
 case 5: S1=100*N_C*N_G;break;}
if(N_C>=30)
  {S2=S1*0.85;}
else 
  {S2=S1;}
S3=S2+15*N_G*N_C;
S_T=S3;
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
