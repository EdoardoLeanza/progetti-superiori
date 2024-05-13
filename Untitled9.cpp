#include<iostream>
using namespace std;
int P, N_LPM, N_LS, N_LM, S_LS, S_LM, S_LPM, C_M_LS, C_M_LPM, C_M_LM, T_L, S_T;
int main ()
{cout<<"Inserisci il tipo di lenzuola scelta(1,2 o 3), quante lenzuola singole acquistate,quante lenzuola matrimoniali acquistate e quante lenzuola a una piazza e mezza acquistate"<<endl;
cin>>T_L>>N_LS>>N_LM>>N_LPM;
switch(T_L)
  {case 1:P=10;break;
   case 2:P=6;break;
   case 3:P=25;break;}
C_M_LS=P*N_LS*2;
C_M_LM=P*N_LM*5;
C_M_LPM=P*3*N_LPM;
if(N_LS>10)
  {S_LS=C_M_LS*1.4;}
else
  {S_LS=C_M_LS*1.3;}
if(N_LM>20)
  {S_LM=C_M_LM*1.3;}
else
  {S_LM=C_M_LM*1.4;}
if(N_LPM<=3)
  {S_LPM=C_M_LPM*1.3;}
else
  {S_LPM=(C_M_LPM-P*3)*1.3;}
cout<<"La spesa totale delle lenzuola singole e' Euro "<<S_LS;
cout<<"  - La spesa totale delle lenzuola a una piazza e mezza e' Euro "<<S_LPM;
cout<<"  - La spesa totale delle lenzuola matrimoniali e' Euro "<<S_LM;
S_T=S_LS+S_LM+S_LPM;
cout<<" - La spesa totale e' Euro "<<S_T;
system ("PAUSE");
return 0;}
