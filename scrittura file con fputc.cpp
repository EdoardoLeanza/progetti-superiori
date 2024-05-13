#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


int main()
{

    FILE *fp;
    char b[1000];
    fp=fopen("prova.txt","w");

    do
    {
        cout<<"Inserisci testo da memorizzare nel file"<<endl;
        cin>>b;
        if(strlen(b)<1 || strlen(b)>1000)
            cout<<"Errore"<<endl;
    }
    while(strlen(b)<1 || strlen(b)>1000);

    for(int i=0; i<strlen(b); i++)
        fputc(b[i],fp);

    fclose(fp);
    system("PAUSE");
    return 0;
}
