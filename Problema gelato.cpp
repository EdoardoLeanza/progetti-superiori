#include<iostream>
using namespace std;
int G, D;
float N_G, S_T, G_1, S_1;
int main()
{cout<<"Inserisci il gusto del gelato(1=Nocciola,2=Cioccolato,3=Crema), le dimensioni del gelato (Cono/Coppetta piccolo=1, Cono/Coppetta medio=2, Cono/Coppetta grande=3) e i numero di gelato desiderati";
cin>>G>>D>>N_G;
switch(G)
  {case 1:G_1=10;break;
   case 2:G_1=9;break;
   case 3:G_1=8;break;}
switch(D)
  {case 1:S_1=0.05*N_G*G_1;break;
   case 2:S_1=0.075*N_G*G_1;break;
   case 3:S_1=0.1*N_G*G_1;break;}
S_T=S_1+0.5*N_G;
cout<<"La spesa totale e' Euro "<<S_T;
system("PAUSE");
return 0;}
