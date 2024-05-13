//Programma che legge un numero e lo accetti solo se è compreso tra 1 e 10
#include<iostream>
#include<cstdlib>
using namespace std;
float a;
int main ()
{	do{
	   cout<<"Inserisci un numero che deve essere compreso tra 1 e 10"<<endl;
	   cin>>a;
	   }while(a<1 || a>10);
	   cout<<"Il numero inserito e' compreso tra 1 e 10, quindi e' ok"<<endl;
	   
system("PAUSE");
return 0;}
