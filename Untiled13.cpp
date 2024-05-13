//Programma che acquisisca un numero positivo, l'utente deve poi inserire un secondo numero maggiore del primo e il programma deve stampare tutti i numeri in ordine decrescente
#include<iostream>
#include<cstdlib>
using namespace std;
int a,b;
int main()
{
    do{
          cout<<"Inserire un numero positivo"<<endl;
          cin>>a;
          cout<<a<<endl<<endl;
          if(a<=0)
           cout<<"Errore!"<<endl;
          }while(a<=0);
    do{
          cout<<"Inserire un numero maggiore del precedente"<<endl;
          cin>>b;
          if(b<=a)
           cout<<"Errore!"<<endl;
          }while(b<=a);
    do{
          cout<<b<<endl;
          b=b-1;
          }while(b>=1);
    cout<<"Fine"<<endl;
    system("PAUSE");
    return 0;
}
