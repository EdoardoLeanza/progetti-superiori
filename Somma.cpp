#include <iostream>         						 
using namespace std;
int main()
{                                     
int num, somma=0;                               //Dichiarazione delle variabili
for (int x=1; x<11; x++){                       //Inizio del ciclo for che legge i 10 numeri da tastiera
	cout<<"Inserire il "<<x<<" numero: ";
	cin>>num;                                    //Legge il numero da tastiera
	if (num==0){                                 //se il numero è 0...
		x=10;                                     //...esce dal programma facendo diventare la condizione (x<10) falsa
	}
	else{                                        //altrimenti aggiunge il numero alla somma
		somma+=num;
	}
}
cout<<"La somma dei numeri inseriti e'': "<<somma<<"\n";
system("PAUSE");
return 0;
}
