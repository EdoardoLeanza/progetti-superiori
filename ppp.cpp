#include <iostream>
#include <cstdlib>
using namespace std;

int potenza (int x, int y)
{   int n=1;
    for(int i=0;i<y;i++)
    {
        cout<<"x (base) = "<<x<<" - n (potenza) = "<<n<<endl;
        n=x*n;

    }
cout<<x<<" alla "<<y<<" = "<<n<<endl;
return n;
}

int main()
{   int po=0,b=0,es=0;
    cout<<"Inserisci la base e l'esponente"<<endl;
    cin>>b>>es;
    po=potenza(b,es);
return 0;
}
