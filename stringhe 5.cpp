//Scrivere un programma che abbia le seguenti caratteristiche:
//-Inserire 3 stringhe;
//-Stampare le prime due in ordine alfabetico(crescente);
//-Inserire nella 3° stringa la meggiore delle due precedenti.

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
char a[10], b[15], c[20];


void ordinamento(char s[])
{
    int l;
    char appo;
    l=strlen(s);
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]>s[j])
            {
                appo=s[i];
                s[i]=s[j];
                s[j]=appo;
}
}
}
}

int main()
{
do{
    cout<<"Inserisci caratteri della prima (max 10 caratteri), della seconda (max 15 caratteri) e della terza stringa (max 20 caratteri)"<<endl;
    gets(a);
    gets(b);
    gets(c);
    }while(strlen(a)<0 || strlen(a)>10 && strlen(b)<0 || strlen(b)>15 && strlen(c)<0 || strlen(c)>20);
cout<<endl<<"Le stringhe inserite sono le seguenti:"<<endl<<a<<endl<<b<<endl<<c<<endl;

cout<<endl<<"Stringhe ordinate:"<<endl;
ordinamento(a);
cout<<"Prima stringa ordinata: "<<a<<endl;
ordinamento(b);
cout<<"Seconda stringa ordinata: "<<b<<endl;

if(strlen(a)>=strlen(b))
    strcpy(c,a);
else
    strcpy(c,b);
cout<<"Il contenuto della terza stringa e': "<<c<<endl;
return 0;
}
