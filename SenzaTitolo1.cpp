#include<iostream>
using namespace std;
int N_L1, N_L2, N_L3, S_1, S_2, S_3, C_M, T_L, S_T;
int main ()
{cout<<"Inserisci il tipo di lenzuola scelta(1,2 o 3), quante lenzuola singole acquistate,quante lenzuola matrimoniali acquistate e quante lenzuola a una piazza e mezza acquistate"<<endl;
cin>>T_L>>N_L1>>N_L2>>N_L3;
if (T_L==1)
  {C_M=10*2*N_L1;}
else
if (T_L==2)
  {C_M=6*3*N_L2;}
else
if (T_L==3)
  {C_M=25*5*N_L3;}
else



if (N_L1>10)
  {S_1=C_M+40;}
else
  {S_1=C_M+30;}
if (N_L3>20)
  {S_2=C_M+30;}
else  	
  {S_2=C_M+40;}
if (N_L2>=3)
  {S_3=C_M+1;}
else
  {S_3=C_M+0.3*C_M;}



S_T=S_1+S_2+S_3;
cout<<"La spesa totale e' Euro"<<S_T;
system ("PAUSE");
return 0;}
