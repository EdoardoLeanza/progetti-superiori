#include<iostream>
#include<cstdlib>
#include<cstring>
#define vett 1000
using namespace std;

int main()
{

    FILE *fp;
    int a;
    char b[vett], c[vett];

    do{
        cout<<"Cosa vuoi fare?"<<endl;
        cout<<"1= Inserire nuova password all'interno del file;"<<endl;
        cout<<"2= Chiedere una password a video e verifica se e' possibile accedere"<<endl<<endl;
        cin>>a;
        if(a<1 || a>2)
            cout<<"Errore"<<endl;
    }while(a<1 || a>2);

    switch(a)
    {
        case 1:{
                fp= fopen("psw.txt","w");
                cout<<"Inserisci la nuova password: ";
                fflush(stdin);
                gets(b);
                fputs(b,fp);

                fclose(fp);
                break;
                }
        case 2:{
                fp= fopen("psw.txt","r");
                cin>>b;

                fgets(c,vett,fp);
                if(strcmp(c,b)==0)
                    cout<<"Accesso consentito"<<endl;
                else
                    cout<<"Accesso negato"<<endl;
                fclose(fp);
                break;
                }
    }

    system("PAUSE");
    return 0;
}
