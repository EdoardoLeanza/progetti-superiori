#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


float addizione(float n1, float n2)
{
    float a=0;

    a=n1+n2;

    return a;
}

void sottrazione(float n1, float n2)
{
    float s=0;

    s=n1-n2;

    cout<<n1<<" - "<<n2<<" = "<<s<<endl;
}

float moltiplicazione()
{
    float m=0,n1, n2;
    cout<<"Inserisci il primo numero"<<endl;
    cin>>n1;
    cout<<"Inserisci il secondo numero"<<endl;
    cin>>n2;
    m=n1*n2;

    return m;
}

void divisione()
{
    float d=0, n1, n2;
cout<<"Inserisci il primo numero"<<endl;
                    cin>>n1;
                    cout<<"Inserisci il secondo numero"<<endl;
                    cin>>n2;
    cout<<"Inserisci il primo numero"<<endl;
    cin>>n1;
    cout<<"Inserisci il secondo numero"<<endl;
    cin>>n2;
    d=n1/n2;

    cout<<n1<<" / "<<n2<<" = "<<d<<endl;
}

int main ()
{
    int r,n;
    float a,m,n1,n2;

do{

    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Addizione;"<<endl;
	   cout<<"2-Sottrazione;"<<endl;
	   cout<<"3-Divisione;"<<endl;
	   cout<<"4-Moltiplicazione;"<<endl;
	   cout<<"5-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    cout<<"Inserisci il primo numero"<<endl;
                    cin>>n1;
                    cout<<"Inserisci il secondo numero"<<endl;
                    cin>>n2;
                    a=addizione(n1,n2);
                    cout<<n1<<" + "<<n2<<" = "<<a<<endl;
                    break;
                    }
            case 2:{cout<<"Inserisci il primo numero"<<endl;
                    cin>>n1;
                    cout<<"Inserisci il secondo numero"<<endl;
                    cin>>n2;
                    sottrazione(n1,n2);
                    break;
                    }
            case 3:{
                    divisione();
                    break;
                    }
            case 4:{
                    m=moltiplicazione();
                    cout<<n1<<" * "<<n2<<" = "<<m<<endl;
                    break;
                    }
            case 5:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=5);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}
