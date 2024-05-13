#include<iostream>
#include<cstdlib>
using namespace std;
int n;
char alf[26] = {'a', 'b', 'c' , 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main()
{do{cout<<"Inserisci il numero della lettera dell'alfabeto che vuoi vedere (esempio: 1=a,2=b,3=c ecc...)"<<endl;
    cin>>n;
    if(n>26|| n<1)
        cout<<"Errore"<<endl;
    }while(n>26 || n<1);
cout<<"La lettera da mostrare e' "<<alf[n-1]<<endl;
system("PAUSE");
return 0;
}
