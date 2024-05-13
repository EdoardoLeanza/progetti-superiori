//Programma che che legga due numeri e li stampi in ordine crescente
#include<iostream>
#include<cstdlib>
using namespace std;
float a,b;
int main ()
{
 	cout<<"Inserisci due numeri che stampero' in ordine crescente"<<endl;
	cin>>a>>b;
	if(a>b)
	cout<<"In ordine crescente i due numeri sono "<<b<<" e "<<a<<endl;
	if(a<b)
	cout<<"In ordine crescente i due numeri sono "<<a<<" e "<<b<<endl;
	if(a==b) 
	cout<<"I due numeri sono uguali"<<endl;
	
system("PAUSE");
return 0;}
