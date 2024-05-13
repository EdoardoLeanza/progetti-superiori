#include<iostream>
using namespace std;
float S_T,S_2,S_3,S_1,N_P1,N_P2,N_P3,T,T1,T2,S_21,S_31;
int main()
{cout<<"Inserisci il numero di pullover di linea 1, il numero di pullover di linea 2, il numero di pullover di linea 3 e la taglia dei pullover"<<endl;
cin>>N_P1>>N_P2>>N_P3>>T;
if (T<=42)
  {S_1=N_P1*200;}
else
  {S_1=N_P1*250;}
if (T<=46)
	{S_21=200*N_P2;}
else
	{S_21=250*N_P2;}
if (N_P2>3)
	{S_2=S_21*0.5;}
else
	{S_2=S_21;}
if (T<=46)
	{S_31=150*N_P3;}
else
	{S_31=175*N_P3;}
if (N_P3>2)
	{S_3=S_31*0.8;}
else
  {S_3=S_31;}
S_T=S_1+S_2+S_3;
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
