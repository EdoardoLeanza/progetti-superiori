#include<iostream>
#include<cstdlib>
#include<cstring>
#define vettore 1000
using namespace std;

int main()
{

    FILE *fp;
    char s[vettore];
    fp=fopen("prova.txt","w");

    cout<<"Inserisci testo"<<endl;
    cin>>s;
    fputs(s,fp);

    fclose(fp);
    system("PAUSE");
    return 0;
}
