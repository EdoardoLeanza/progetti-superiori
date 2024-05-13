#include<iostream>
using namespace std;
int N_P1, N_P2, N_P3, T, S_1, S_2, S_3, S_21, S_31, S_T, risp, C_M2;
int main ()
{cout<<"Inserisci il numero di pullover 1, il numero di pullover tipo 2, il numero di pulloer tipo 3 e la taglia";
cin>>N_P1>>N_P2>>N_P3>>T;

if(T<=42)
  {S_1=N_P1*200;}
else
  {S_1=N_P1*250;}
cout<<"La spesa dei pullover 1 e' Euro "<<S_1;
if(T<=46)
  {C_M2=200;}
else
  {C_M2=250;}

if(N_P2>3)
  {S_2=3*C_M2+(N_P2-3)*0.5*C_M2;}
else 
  {S_2=C_M2*N_P2;}
cout<<"La spesa dei pullover 2 e' Euro "<<S_2;
if(T<=46)
  {S_31=150*N_P3;}
else 
  {S_31=175*N_P3;}
  
if(N_P3>2)
  {S_3=S_31*0.8;}
else
  {S_3=S_31;}
cout<<"La spesa dei pullover 3 e' Euro "<<S_3;
S_T=S_1+S_2+S_3;
cout<<"La spesa totale e' Euro "<<S_T;
cout<<"Vuoi continuare?(1=No, 2=Si')";
while (risp==1);
return 0;}
