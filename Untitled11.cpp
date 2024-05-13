//Programma che legge un numero float e che lo ripete finchè il numero dato in input non risulta positivo
#include<iostream>
#include<cstdlib>
using namespace std;
float a;
int main ()
{
 	do{
	   cout<<"Inserisci un numero che deve essere positivo"<<endl;
	   cin>>a;
	   }while(a<0);
	   cout<<"Il numero inserito e' positivo, quindi e' ok"<<endl;
	   
system("PAUSE");
return 0;}
