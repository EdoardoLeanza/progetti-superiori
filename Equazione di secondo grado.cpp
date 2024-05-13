#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
float a,b,c,x;
int main ()
{       do{     cout<<"Inserisci il valore di a, di b e di c, ma tutti i valori devono essere diversi da 0"<<endl;
                cin>>a>>b>>c;
                if(a==0)
                    cout<<"Errore, riprovare"<<endl;
                if(b==0)
                    cout<<"Errore, riprovare"<<endl;
                if(c==0)
                    cout<<"Errore, riprovare"<<endl;
                }while(a==0 || b==0 || c==0);

x=(-b+sqrt((b*(b))-4*(a)*(c)));
x=x/(2*a);
cout<<"Il valore di x1 e' "<<x<<endl;
cout<<"Il valore di x1 e' stato trovato mettendo il + prima della radice quadrata"<<endl;

x=(-b-sqrt((b*(b))-4*(a)*(c)));
x=x/(2*a);
cout<<"Il valore di x2 e' "<<x<<endl;
cout<<"Il valore di x2 e' stato trovato mettendo il - prima della radice quadrata"<<endl;

system("PAUSE");
return 0;}

