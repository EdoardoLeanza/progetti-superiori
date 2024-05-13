#include<iostream>
#include<cstdlib>
using namespace std;
int NP_1, NP_2, NP_3, T, S_T, S_3, S_2, S_1, S_31, S_21;
int main ()
{cout<<"Inserisci il numero di pullover 1, il numero di pullover 2, il numero di pullover 3 e la taglia dei pullover 1, 2 e 3"<<endl;
cin>>NP_1>>NP_2>>NP_3>>T;

if(T>42)
  S_1=250*NP_1;
else
  S_1=200*NP_1;

if(T>46)
  S_21=250;
else
  S_21=200;

if(NP_2>3)
  S_2=3*S_21+(NP_2-3)*(S_21/2);
else
  S_2=S_21*NP_2;

if(T>46)
  S_31=175*NP_3;
else
  S_31=150*NP_3;

if(NP_3>2)
  S_3=S_31*0.8;
else
  S_3=S_31;


S_T=S_1+S_2+S_3;
cout<<"La spesa totale dei pullover e' "<<S_T<<" euro"<<endl;
system("PAUSE");
return 0;
}
