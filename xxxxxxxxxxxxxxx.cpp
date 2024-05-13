#include<iostream>
using namespace std;
int n1, n2, n3, risp;
int main ()
{do
 {cout<<"Inserisci 3 numeri di cui bisogna trovare il minore"<<endl;
    cin>>n1>>n2>>n3;
    if(n1<n2&&n1<n3)
        cout<<"Il numero minore e' "<<n1<<endl;
    else
    {
        if(n2<n3)
            cout<<"Il numero minore e' "<<n2<<endl;
        else
            cout<<"Il numero minore e' "<<n3<<endl;
    }
    cout<<"Vuoi continuare?(1=No, 2=Si)"<<endl;
    cin>>risp;} while(risp==2);
    return 0;
}
