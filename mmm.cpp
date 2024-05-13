#include<iostream>
#include<cstdlib>
using namespace std;
int a;
int main ()
{do{    cout<<"Inserisci un numero"<<endl;
        cin>>a;
        if(a%2!=0)
            cout<<"Il numero inserito e' dispari"<<endl;
else if(a%2==0)
    cout<<"Il numero inserito e' pari"<<endl;
}while(a%2!=0);
system ("PAUSE");
return 0;}
