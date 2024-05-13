#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct rec1
{
    char classe[4];
    float ora, giorno, materia;
}archivio[100];

int ins()
{
    int n=0;
    do{
	   cout<<"Quante classi vuoi inserire (max 100)?"<<endl;
	   cin>>n;
	   if(n<=0 || n>100)
        cout<<"Errore"<<endl;
	   }while(n<=0 || n>100);

	   for(int i=0;i<n;i++)
       {
           do{
            cout<<"Classe "<<i+1<<" :"<<endl;
            fflush(stdin);
            gets(archivio[i].classe);
            if(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>4)
                cout<<"Errore"<<endl;
        }while(strlen(archivio[i].classe)<0 || strlen(archivio[i].classe)>4);

        do{
            cout<<"Giorno "<<i+1<<" (1=Lunedi'; 2=Martedi'; 3=Mercoledi'; 4=Giovedi'; 5=Venerdi'; 6=Sabato):"<<endl;
            cin>>archivio[i].giorno;
            if(archivio[i].giorno<0 || archivio[i].giorno>6)
                cout<<"Errore"<<endl;
        }while(archivio[i].giorno<0 || archivio[i].giorno>6);

        for(int h=0;h<5;h++)
        {
            do{
            cout<<"Ora "<<h+1<<" (da 1 a 5): "<<endl;
            cin>>archivio[i].ora;
            if(archivio[i].ora<0 || archivio[i].ora>5)
                cout<<"Errore"<<endl;
        }while(archivio[i].ora<0 || archivio[i].ora>5);

            do{
            cout<<"Materia "<<h+1<<" (1=Italiano; 2=Matematica; 3=Fisica; 4=Inglese; 5=Storia; 6=Arte; 7=Informatica; 8=Filosofia; 9=Scienze; 10=Ginnastica):"<<endl;
            cin>>archivio[i].materia;
            if(archivio[i].materia<0 || archivio[i].materia>10)
                cout<<"Errore"<<endl;
        }while(archivio[i].materia<0 || archivio[i].materia>10);
        }

        }
cout<<endl<<endl;
return n;
}

void stampa1(int n)
{
    float ora=0, giorno=0;
    int trovato=0;

    do{
        cout<<"Inserisci ora "<<endl;
        cin>>ora;
        if(ora<0 || ora>5)
            cout<<"Errore"<<endl;
    }while(ora<0 || ora>5);

    do{
        cout<<"Inserisci giorno "<<endl;
        cin>>giorno;
        if(giorno<0 || giorno>6)
            cout<<"Errore"<<endl;
    }while(giorno<0 || giorno>6);

    for(int i=0;i<n;i++)
    {
        if((archivio[i].ora==ora) && (archivio[i].giorno==giorno))
        {
            trovato++;
            cout<<"La materia trovata e': "<<archivio[i].materia<<endl;
        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

void stampa2(int n)
{
    char classe[4];
    float ora=0;
    int trovato=0;

    do{
        cout<<"Inserisci ora "<<endl;
        cin>>ora;
        if(ora<0 || ora>5)
            cout<<"Errore"<<endl;
    }while(ora<0 || ora>5);

    do{
        cout<<"Inserisci classe"<<endl;
        fflush(stdin);
        gets(classe);
        if(strlen(classe)<0 || strlen(classe)>4)
            cout<<"Errore"<<endl;
    }while(strlen(classe)<0 || strlen(classe)>4);

    cout<<"Ecco l'orario della classe "<<classe<<" :"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        if(archivio[i].ora==ora && strcmp(archivio[i].classe,classe)==0)
        {
            trovato++;
            cout<<"Giorno: "<<archivio[i].giorno<<endl;
            cout<<"Ora: "<<archivio[i].ora<<endl;
            cout<<"Materia: "<<archivio[i].materia<<endl;
        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;

}

void stampa3(int n)
{
    cout<<"Ecco l'intero orario scolastico: "<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Classe: "<<archivio[i].classe<<endl;
        cout<<"Giorno: "<<archivio[i].giorno<<endl;
        cout<<"Ora: "<<archivio[i].ora<<endl;
        cout<<"Materia: "<<archivio[i].materia<<endl;
    }
}

void stampa4(int n)
{
    char classe[4];
    int trovato=0;

    do{
        cout<<"Inserisci classe"<<endl;
        fflush(stdin);
        gets(classe);
        if(strlen(classe)<0 || strlen(classe)>4)
            cout<<"Errore"<<endl;
    }while(strlen(classe)<0 || strlen(classe)>4);

    cout<<"Ecco l'orario settimanale della classe "<<classe<<" :"<<endl;

    for(int i=0;i<7;i++)
    {
        if(strcmp(archivio[i].classe,classe)==0)
        {
            trovato++;
            cout<<"Giorno: "<<archivio[i].giorno<<endl;
            cout<<"Ora: "<<archivio[i].ora<<endl;
            cout<<"Materia: "<<archivio[i].materia<<endl;
        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

void stampa5(int n)
{
    int trovato=0;
    float giorno=0;

    do{
        cout<<"Inserisci giorno (1=Lunedi'; 2=Martedi'; 3=Mercoledi'; 4=Giovedi'; 5=Venerdi'; 6=Sabato)"<<endl;
        cin>>giorno;
        if(giorno<0 || giorno>6)
            cout<<"Errore"<<endl;
    }while(giorno<0 || giorno>6);

    for(int i=0;i<n;i++)
    {
        if(archivio[i].giorno==giorno)
        {
            trovato++;
            cout<<"Materia: "<<archivio[i].materia<<endl;
            cout<<"Ora: "<<archivio[i].ora<<endl;
            cout<<"Materia: "<<archivio[i].materia<<endl;
        }
    }
if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

void calcolo(int n)
{
    char classe[4];
    float h=0, materia=0;
    int trovato=0;

    do{
        cout<<"Inserisci materia (1=Italiano; 2=Matematica; 3=Fisica; 4=Inglese; 5=Storia; 6=Arte; 7=Informatica; 8=Filosofia; 9=Scienze; 10=Ginnastica)"<<endl;
        cin>>materia;
        if(materia<0 || materia>10)
            cout<<"Errore"<<endl;
    }while(materia<0 || materia>10);

    do{
        cout<<"Inserisci classe"<<endl;
        fflush(stdin);
        gets(classe);
        if(strlen(classe)<0 || strlen(classe)>4)
            cout<<"Errore"<<endl;
    }while(strlen(classe)<0 || strlen(classe)>4);

    for(int i=0;i<n;i++)
    {
        if(archivio[i].materia==materia)
        {
            trovato++;
            h=h+archivio[i].ora;
        }
    }
cout<<"Durante la materia numero "<<materia<<", nella classe "<<classe<<" ,vengono fatte "<<h<<" ore"<<endl;

if(trovato==0)
    cout<<"Non e' stato trovato nulla"<<endl;
}

int main ()
{
    int r,n;

do{
n=ins();
    do{
	   cout<<endl;
	   cout<<"Cosa vuoi fare?"<<endl;
	   cout<<"1-Stampa della materia insegnata in una classe, in un'ora e in un giorno della settimana;"<<endl;
	   cout<<"2-Stampa dell'orario di una classe in un'ora specifica della settimana;"<<endl;
	   cout<<"3-Visualizzazione dell'intero orario scolastico;"<<endl;
	   cout<<"4-Visualizzazione dell'orario settimanale di una classe;"<<endl;
	   cout<<"5-Visualizzazione dell'orario di una classe in un giorno particolare;"<<endl;
	   cout<<"6-Data una materia e una classe calcolare il numero delle ore che vengono fatte di quella stessa materia;"<<endl;
	   cout<<"7-Esci;"<<endl;
	   cout<<endl;
	   cin>>r;

	   switch(r)
	   {
            case 1:{
                    stampa1(n);
                    break;
                    }
            case 2:{
                    stampa2(n);
                    break;
                    }
            case 3:{
                    stampa3(n);
                    break;
                    }
            case 4:{
                    stampa4(n);
                    break;
                    }
            case 5:{
                    stampa5(n);
                    break;
                    }
            case 6:{
                    calcolo(n);
                    break;
                    }
            case 7:{
                    cout<<"Fine"<<endl;
                    break;
                    }
            default: cout<<"Errore"<<endl;
        }
        }while(r!=7);

        do{
            cout<<"Vuoi continuare? (1=Si, 2=No)"<<endl;
            cin>>r;
            if(r<1 || r>2)
                cout<<"Errore"<<endl;
        }while(r<1 || r>2);
        }while(r==1);
return 0;
}