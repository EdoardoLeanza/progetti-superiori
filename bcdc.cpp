#include<iostream>
using namespace std;
int conta, somma, numero, risp;
int main()
{
do 
	{	
	conta=0;
	do
	{
		conta=conta+1;
		cout<<"Inserisci il "<<conta<<" numero"<<endl;
		cin>>numero;
		somma=somma+numero;
	} while (numero!=0 && conta<10);
	cout<<"La somma e' "<<somma<<endl;
	cout<<"Vuoi continuare? (1=No, 2=Si)"<<endl;
	cin>>risp;
	} while(risp==2);
	return 0;
}
