#include<iostream>
using namespace std;
int N_P1,N_P2,N_P3,T,T1,T2,S_21,S_31;
float S_T,S_2,S_3,S_1;
int main()
{
	cout<<"Inserisci il numero di linea di tipo 1, il numero di pullover di linea 2, il numero di pullover di linea 3 e la taglia dei pullover"<<endl;
	cin>>N_P1>>N_P2>>N_P3>>T;
	if (T<=42)
	{
		S_1=N_P1*200;
	}
	else
	{
		S_1=N_P1*250;
	}
	T1=T;
	if (T1<=46)
	{
		S_2=200*N_P2;
	}
	else
	{
		S_2=250*N_P2;
	}
	if (N_P2>3)
	{
		S_2=S_21*0.5;
	}
	else
	T2=T1;
	if (T2<=46)
	{
		S_3=150*N_P3;
	}
	else
	{
		S_3=175*N_P3;
	}
	if (N_P3>2)
	{
		S_3=S_3*0.8;
	}
	else
	S_T=S_1+S_2+S_3;
	cout<<"La spesa totale è Euro "<<S_T<<endl;
	system("PAUSE");
	return 0;
}
