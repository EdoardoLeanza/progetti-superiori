#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

    FILE *fp;
    char c;
    fp=fopen("prova.txt","r");
    if(fp==NULL)
    {
        cout<<"Impossibile aprire il file"<<endl;
        system("PAUSE");
        exit(1);
    }
    else
    {
        c=fgetc(fp);
        while(c!= EOF)
        {
            putchar(c);
            c=fgetc(fp);
        }
    }
    fclose(fp);
    system("PAUSE");
    return 0;
}
