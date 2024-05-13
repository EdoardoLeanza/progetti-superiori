#include<iostream>
using namespace std;
int A_1, A_2, A_3, S_T, T_S1, T_S2, T_S3, S_T1, P_1, P_2, P_3, T_S;
int main ()
{cout<<"Inserisci il numero di abiti di linea 1, il numero di abiti linea 2, il numero di abiti linea 3 e la taglia scelta"<<endl;
cin>>A_1>>A_2>>A_3>>T_S;
if(T_S<=40)
 {P_1=150;}
else
 {P_1=180;}
if(T_S2<=40)
 {P_2=200;}
else 
 {P_2=250;}
if(T_S3<=50)
  {P_3=100;}
else
  {P_3=125;}
S_T1=A_1*P_1+A_2*P_2+A_3*P_3;
if(S_T1<=500)
  {S_T=S_T1;}
else
  {S_T=S_T1*0.8;} 
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
