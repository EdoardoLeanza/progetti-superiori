#include<iostream>
using namespace std;
int a, n, c;
int main ()
{
cout<<"Inserisci un qualsiasi numero e poi mostri i primi 1000 multipli"<<endl;
cin>>n;
for(c=0; c<=1000; c+1)
    {
    a=n*c;
    cout<<"Il multiplo numero "<<c<<" di "<<n<<" e' "<<a<<endl;
    }
return 0;
}
