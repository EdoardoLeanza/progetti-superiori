#include<iostream>
#include<cstdlib>
#include<cstring>
#define vettore 1000
using namespace std;
int main()
{

    FILE *fp;
    fp=fopen("prova.txt", "r");

    if(fp==NULL)
        cout<<"OK" <<endl;
    else
        cout<<"NOT OK" <<endl;

    fclose(fp);

    system("PAUSE");
    return 0;
}
