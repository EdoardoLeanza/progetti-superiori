#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int A_V, T_D, C_T, C_MANO, C_M, C_C, C_MA, C_MT, T_MD, M, T_C, C_TM;
int main ()
{cout<<"Inserisci l'altezza della villa ed il tipo di decorazione richiesta"<<endl;
cin>>A_V>>T_D;
if(A_V==2)
{T_C=200;
M=5060;
T_MD=25;}
else if(A_V>2)
{T_C=250;
 M=6800;
 T_MD=45;}
if(T_D==1)
{C_MT=400;}
else
{C_MT=500;}
C_MA=M*10;
C_C=T_C*3000;
C_M=C_MT*T_MD;
C_TM=C_MA+C_C+C_M;
C_MANO=0.3*C_TM;
C_T=C_TM+C_MANO;
cout<<"La spesa totale e' Euro "<<C_T<<endl;
system("PAUSE");
return 0;
}
