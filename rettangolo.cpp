#include<iostream>
using namespace std;
int a, b, A, P, risp;
int main ()
{do
	{
	cout<<"Inserisci il valore del lato lungo (a) ed il valore del lato corto (b)";
	cin>>a>>b;
	A=a*b;
	P=2*(a+b);
	cout<<"L'area del rettamgolo e' "<<A<<endl;
	cout<<"Il perimetro del rettangolo e' "<<P<<endl;
	cout<<"Vuoi continuare?(1=No, 2=Si')";
	cin>>risp;
	} while (risp==2);
return 0;}

