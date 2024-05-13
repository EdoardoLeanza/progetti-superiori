#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


int main()
{
int n=0,x=0;
cout<<"Inserisci n"<<endl;
cin>>n;
cout<<"Inserisci x"<<endl;
cin>>x;
cout<<"Ecco l'elenco di tutti i multipli di n inferiori ad x:"<<endl;

                                      for(int i=0;i<x;i+=n)
                                            {
                                                 cout<<i<<endl;
                                            }


/*do{
    cout<<n<<endl;
    n=n+2;
}while(n<100000);
*/
return 0;
}
