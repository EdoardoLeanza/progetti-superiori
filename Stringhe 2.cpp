//Scrivere un programma che abbia le seguenti caratteristiche:
//-Inserire 2 stringhe;
//-Cercare nella 1° stringa la 2°.
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
char a[50], b[50];

int main()
{
do
{
    cout<<"Inserisci la prima stringa (max 50 caratteri) e la seconda stringa (max 50 caratteri)"<<endl;
    gets(a);
    gets(b);
}while(strlen(a)<0 || strlen(a)>50 && strlen(b)<0 || strlen(b)>50);


if(strcmp(a,b)==0)
    cout<<"Quello che ho trovato nella prima stringa e': "<<b<<endl;
else
    cout<<"Non ho trovato niente"<<endl;
return 0;
}
