#include<iostream>
using namespace std;
int N_L1, N_L2, N_L3, S_1, S_2, S_3, C_M1, C_M3, C_M2, T_L, S_T;
int main ()
{cout<<"Inserisci il tipo di lenzuola scelta(1,2 o 3), quante lenzuola singole acquistate,quante lenzuola matrimoniali acquistate e quante lenzuola a una piazza e mezza acquistate"<<endl;
cin>>T_L>>N_L1>>N_L2>>N_L3;
if (T_L==1)
  {C_M1=10*2*N_L1;}
else
if (T_L==2)
  {C_M2=6*3*N_L2;}
else
if (T_L==3)
  {C_M3=25*5*N_L3;}
else



if (N_L1>10)
  {S_1=C_M1*1.3;}
else
  {S_1=C_M1*1.3;}
if (N_L3>20)
  {S_2=C_M2*1.3;}
else  	
  {S_2=C_M2*1.4;}
if (N_L2>=3)
  {S_3=C_M3+1;}
else
  {S_3=C_M3+0.3*C_M3;}



S_T=S_1+S_2+S_3;
cout<<"La spesa totale e' Euro"<<S_T;
system ("PAUSE");
return 0;}
