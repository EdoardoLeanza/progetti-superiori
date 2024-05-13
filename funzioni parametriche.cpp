#include <iostream>
#include <cstdlib>
using namespace std;
int a;
float hcvsdhvxh,njnjccnn;

float somma(float n1, float n2)
{
float s;
s=n1+n2;
//cout<<n1<<"+"<<n2<<"="<<s<<endl;
return s;
}


float differenza(float n1, float n2)
{
float d;
d=n1-n2;
cout<<n1<<"-"<<n2<<"="<<d<<endl;
return d;
}

float prodotto(float n1, float n2)
{
float p;
p=n1*n2;
cout<<n1<<"*"<<n2<<"="<<p<<endl;
return p;
}


float divisione(float n1, float n2)
{
float l;
l=n1/n2;
cout<<n1<<"/"<<n2<<"="<<l<<endl;
return l;
}


int main()

{
    float t = somma(2,3);
    cout<<" "<<t;

    /*do
    {
        do{
            do{
                cout<<"Inserisci due numeri"<<endl;
                cin>>hcvsdhvxh>>njnjccnn;
                cout<<"Scegli tra: 1-Somma; 2-Differenza; 3-Prodotto; 4-Divisione; 5-Esci"<<endl;
                cin>>a;
                if(a<1 || a>5)
                    cout<<"Errore"<<endl;
            } while(a<1 || a>5);

            switch(a)
            {
                case 1: somma(hcvsdhvxh,njnjccnn);break;
                case 2: differenza(hcvsdhvxh,njnjccnn);break;
                case 3: prodotto(hcvsdhvxh,njnjccnn);break;
                case 4: divisione(hcvsdhvxh,njnjccnn);break;
                case 5: break;
                default: cout<<"Scelta errata"<<endl;
            }
        }while(a>0 && a<5);
    }while(a<5);
    return 0;
    */
}
