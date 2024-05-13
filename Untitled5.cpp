#include<iostream>
using namespace std;
int T_C, D_S, Q_C, S_T, C_M, S_1;
int main ()
{cout<<"Inserisci il tipo di coperta scelta dal cliente (tipo 1,2 o 3), quale dimensione scelta per quel tipo(2,3 o 4) e quante coperte di quel tipo acquistate"<<endl;
cin>>T_C>>D_S>>Q_C;
switch(D_S)
   {case 2: D_S=2;break;
    case 3: D_S=3;break;
    case 4: D_S=4;break;}
switch(T_C)
   {case 1: C_M=D_S*30;break;
    case 2: C_M=D_S*25;break;
    case 3: C_M=D_S*15;break;}
if(Q_C<=20)
  {S_1=C_M+0.4*C_M;}
else
  {S_1=C_M+0.3*C_M;}
S_T=S_1*Q_C;
cout<<"La spesa totale e' Euro "<<S_T<<endl;
system("PAUSE");
return 0;}
