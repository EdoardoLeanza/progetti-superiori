#include<iostream>
#include<cstdlib>
using namespace std;
float v[31];

int inserimento()
{
    int n=0;
    do{
	   cout<<"Quanti sono i giorni? (max 31 giorni)"<<endl;
	   cin>>n;
	   if(n<1 || n>31)
        cout<<"Errore"<<endl;
	   }while(n<1 || n>31);

	   for(int i=0;i<n;i++)
       { do{
            cout<<"Inserisci temperatura (compresa tra -20 e +50 gradi)"<<endl;
            cin>>v[i];
            if(v[i]<-20 || v[i]>50)
                cout<<"Errore"<<endl;
        }while(v[i]<20 || v[i]>50);
        }
return n;
}

float media(int n)
{
    float h=0,m;
    for(int i=0;i<n;i++)
        h=h+v[i];
    m=h/n;
    cout<<"La media e': "<<m<<endl;
    return m;
}

void inf_a_5(int n)
{
    int k=0;
    for(int i=0;i<n;i++)
        {
            if(v[i]<5)
                k++;
        }
    cout<<"In "<<k<<" giorni la temparatura e' risultata inferiore a 5 gradi"<<endl;
}

void temp_rilev(int n)
{
    float t=0;
    do{
            cout<<"Inserisci una temperatura"<<endl;
            cin>>t;
            if(t<-20 || t>50)
                cout<<"Errore"<<endl;
    }while(t<-20 || t>50);

    for(int i=0;i<n;i++)
        {
            if(t==v[i])
                cout<<"La temparatura "<<t<<" e' stata rilevata il giorno numero "<<i+1<<endl;
            else
                cout<<"La temparatura "<<t<<" non e' stata rilevata il giorno numero "<<i+1<<endl;
        }
}

void inf_media(int n, float m)
{
    int l=0;
    for(int i=0;i<n;i++)
        {
            if(v[i]<m)
                l++;
        }
    cout<<l<<" temperature sono inferiori alla media"<<endl;
}

void giorno(int n)
{
    float tem=0;
    do{
    cout<<"Inserisci una temparatura"<<endl;
    cin>>tem;
    if(tem<-20 || tem>50)
                cout<<"Errore"<<endl;
    }while(tem<-20 || tem>50);
    for(int i=0;i<n;i++)
        {
            if(tem==v[i])
                cout<<"La temparatura "<<tem<<" è stata rilevata almeno 1 volta"<<endl;
            else
                cout<<"La temparatura "<<tem<<" non è mai stata rilevata"<<endl;
        }
}



int main ()
{do
{    inserimento();

    int s;
    do{
    do{
	   cout<<"Cosa vuoi fare? (1-Inserimento; 2-Media; 3-Inferiore a 5; 4-Temp.rilevat; 5-Inferiore media; 6-Giorno; 7-Esci)"<<endl;
	   cin>>s;
	   if(s<1 || s>7)
        cout<<"Errore"<<endl;
	   }while(s<1 || s>7);

	   switch(s)
	   {
            case 1:{
                    inserimento();
                    break;
                    }
            case 2:{
                    media();
                    break;
                    }
            case 3:{
                    inf_a_5();
                    break;
                    }
            case 4:{
                    temp_rilev();
                    break;
                    }
            case 5:{
                    media();
                    inf_media();
                    break;
                    }
            case 6:{
                    giorno();
                    break;
                    }
            case 7:break;

            default: cout<<"Errore"<<endl;
        }
        }while(s>0 && s<7);
        }while(s<7);
return 0;
}
