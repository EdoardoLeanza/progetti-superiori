#include<iostream>
#include<cstdlib>
using namespace std;
int a,i=0;
int main ()
{do{
    cout<<"Inserisci un numero intero pari"<<endl;
    cin>>a;
    if(a%2==0)
        cout<<"Va bene"<<endl;
    else if(a%2!=0)
        cout<<"Errore, il numero inserito non e' pari"<<endl;
    }while(a%2!=0);
cout<<"I primi 10 numeri pari di "<<a<<" sono:"<<endl;
do{
        i=i+2;
        cout<<a+i<<endl;
}while(i<20);
system ("PAUSE");
return 0;}
