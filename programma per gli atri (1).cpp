/*
Si vuole gestire l’archivio della segreteria didattica di una scuola in cui ogni record è costituito dai campi :
codice alunno (esattamente 5 char) 
cognome
nome
anno scolastico (dal 2000 al 2019)
corso di studi: a richiesta dell’utente, se l’alunno si iscrive al liceo, indicare L e le sezioni di appartenenza saranno S, T, U altrimenti indicare I e le sezioni saranno dalla A alla E 
classe: a richiesta dell’utente, se l’alunno è frequentante, inserire la classe (ad es. 1A, 2C….), altrimenti DI (se diplomato) o TR (se trasferito)1
assenze mensili (vettore di interi con 10 posizioni in cui l’indice indica il mese)2
monte ore annuale (891 biennio Liceo, 990 triennio Liceo, 1056 per l’ITI)
Dopo aver inserito i dati, con gli opportuni controlli, realizzare:

L’ordinamento per classe (procedura obbligatoria) stampando poi l’elenco degli alunni (cognome e nome)
Data in input una classe calcolare il totale delle assenze annuali per ogni alunno stampando poi l’elenco con nome, cognome, totale assenze. Stampare inoltre il nome e cognome degli alunni il cui numero di assenze supera i ¾ del monte ore annuale. 
Stampare l’elenco alfabetico degli alunni della scuola, con l’indicazione della classe di appartenenza. Stampare poi il numero dei diplomati, dei trasferiti e di frequentanti.
Modifica del campo classe di un alunno dato in input.
Cancellazione dei record degli alunni diplomati e dei trasferiti, mettendo questi record in due strutture di appoggio dette DIPLOMATI e TRASFERITI, i cui campi sono:
Anno scolastico
Codice alunno
Cognome
Nome
*/

#include <iostream>
#include <cstring>
using namespace std;
struct rec
{
    int anno,assenze,ore,anno_2;
    char codice[5],nome[10],cognome[10],corso,classe,status;
}scuola[10],appo;

struct rec_1
{
	int anno;
	char cod[5],cognome[10],nome[10];
}diplomati[10];

struct rec_2
{
	int anno;
	char cod[5],cognome[10],nome[10];
}trasferiti[10];

int inserimento()
{
    int i=0,risp;
    do{
    	do{
    		cout<<"inserisci l'anno"<<endl;
    		cin>>scuola[i].anno;
		}while(scuola[i].anno<2000 || scuola[i].anno>2019);
		
		do{
			cout<<"inserisci il tuo anno"<<endl;
			cin>>scuola[i].anno_2;
		}while(scuola[i].anno_2<5 || scuola[i].anno_2>0);
    	
	   fflush(stdin);
       do{
	   		cout<<"inserisci nome"<<endl;
      		gets (scuola[i].nome);
       }while(strlen(scuola[i].nome)<0||strlen( scuola[i].nome)>10);
       
       fflush(stdin);
       do{
	   		cout<<"inserisci cognome"<<endl;
       		gets (scuola[i].cognome);
       }while(strlen(scuola[i].cognome)<0||strlen(scuola[i].cognome)>10);
       
       do{
       	cout<<"inserisci il tuo stato attuale f: frequentante d: diplomato t: trasferito"<<endl;
       	cin>>scuola[i].status;
	   }while (scuola[i].status !=  'f' && scuola[i].status != 'd' && scuola[i].status != 't');
       
       if (scuola[i].status=='f')
       {
        	do{
                cout<<"inserisci il corso liceo:l itis:i"<<endl;
                cin>>scuola[i].corso;
            }while(scuola[i].corso!='i' && scuola[i].corso !='l');
			 
       		if (scuola[i].corso=='l')
            {
            	do{
		  			cout<<"inserisci la classe"<<endl;
          			cin>>scuola[i].classe;
            	}while(scuola[i].classe<'r'); 
            	
				if (scuola[i].anno_2 <3)
				{
					do{
						cout<<"inserisci il numero di assenze fatte"<<endl;
						cin>>scuola[i].assenze;
					}while(scuola[i].assenze<0 || scuola[i].assenze >891);
				}
				
				else
				{
						do{
						cout<<"inserisci il numero di assenze fatte"<<endl;
						cin>>scuola[i].assenze;
					}while(scuola[i].assenze<0 || scuola[i].assenze >990);
				}
            }
            
       		if(scuola[i].corso=='i')
       		{
       			do{
       				cout<<"inserisci la classe"<<endl;
          			cin>>scuola[i].classe;
				}while(scuola[i].classe>'f'); //&& strcmp(scuola[i].classe,'f')<0
				
				do{
					cout<<"inserisci il numero di assenze"<<endl;
					cin>>scuola[i].assenze;
				}while (scuola[i].assenze>0 && scuola[i].assenze <1056);
	  		}
	   }
		
        do{
	   		cout<<"inserisci codice"<<endl;
       		gets (scuola[i].codice);
        }while(strlen(scuola[i].codice)<0||strlen(scuola[i].codice)>5);
       i++;
       cout<<"vuoi continuare 1si 2no"<<endl;
       cin>>risp;
       }while (risp==1 && i<20);
       return i;
}

void crescente (int i)
{
	int n,j;
	for(n=0;n<i-1;n++)
	{
		for(j=n+1;j<i;j++)
		{
			if(scuola[n].classe>scuola[j].classe)
			{
				appo=scuola[n];
				scuola[n]=scuola[j];
				scuola[j]=appo;
			}	
		}
	}
	for(n=0;n<i;n++)
	{
        cout<<scuola[n].nome<<endl;
        cout<<scuola[n].cognome<<endl;
    }
}

void assenze (int i)
{
	int n=0,j=0,trovato=0,z=0;
	char c;
	float s=0, m;
	do{
		cout<<"inserisci la classe"<<endl;
       	cin>>c;
   	}while(strlen(scuola[n].classe)<0||strlen(scuola[n].classe)>1 ); //&& strcmp(scuola[i].classe,'r')>0
	do{
		if(scuola[n].classe==c)
		{
			cout<<scuola[n].nome<<endl;
	    	cout<<scuola[n].cognome<<endl;
	    	cout<<scuola[n].assenze<<endl;
	    	cout<<endl;
		}
		n++;
	}while (n<i);
	
	do{
		if (scuola[z].anno_2<3 && scuola[z].classe=='l')
		m=891*0.75;
		if (scuola[z].anno_2>2 && scuola[z].classe=='l')
		m=990*0.75;
		if(scuola[z].classe=='i')
		m=1056*0.75;	
	}while(z<i);
	
	do{
		if(scuola[j].assenze>m)
		{
			cout<<scuola[j].cognome<<endl;
			cout<<scuola[j].nome<<endl;
			trovato++;
		}
		j++;
	}while(j<i);
	if (trovato==0)
	cout<<"non c'e nessuno con assenze maggiori alla assenze massime previste"<<endl;
}

void alfabetico (int i)
{
	int n,j;
	for(n=0;n<i-1;n++)
	{
		for(j=n+1;j<i;j++)
		{
			if( strcmp(scuola[n].cognome,scuola[j].cognome)>0)
			{
				appo=scuola[n];
				scuola[n]=scuola[j];
				scuola[j]=appo;
			}	
		}
	}
	for(n=0;n<i;n++)
	{
        cout<<scuola[n].nome<<endl;
        cout<<scuola[n].cognome<<endl;
    }
}

void stato (int i)
{
	int n=0,z=0,x=0,c=0;
	do{
		if (scuola[n].status=='f')
		z++;
		if (scuola[n].status=='d')
		x++;
		if (scuola[n].status=='t')
		c++;
		n++;
	}while (n<i);
	cout<<"diplomati "<<x<<endl;
	cout<<"trasferiti "<<c<<endl;
	cout<<"frequentanti "<<z<<endl;
}

void modifica (int i)
{
	int n=0,trovato=0;
	char nom[10],cogn[10];
	fflush(stdin);
    do{
    	cout<<"inserisci nome"<<endl;
      	gets (nom);
    }while(strlen(scuola[i].nom)<0||strlen( scuola[i].nom)>10);
       
    fflush(stdin);
    do{
   		cout<<"inserisci cognome"<<endl;
       	gets (cogn);	         
    }while(strlen(scuola[i].cogn)<0||strlen(scuola[i].cogn)>10);
    do{
    	if (strcmp(scuola[n].nome,nom)==0 && strcmp (scuola[n].cognome,cogn)==0)
    	{
    		trovato++;
    		cin>>scuola[n].classe;
		}
		n++;
	}while (n<i);
	if (trovato==0)
	cout<<"non c'e nessuno"<<endl;
}

int cancellazione(int i)
{
    int n=0,j=0,a=0,b=0;
    for (n=0;n<i;n++)
    {
        if (scuola[a].status=='t' || scuola[a].status=='d')
        {
        	do{
        		if (scuola[a].status=='d')
        		{
        		    strcpy(diplomati[a].anno,scuola[a].anno);
        			strcpy(diplomati[a].nome,scuola[a].nome);
        			strcpy(diplomati[a].cognome,scuola[a].cognome);
        		}
        		a++;
			}while (a<i);
			do{
        		if (scuola[b].status=='t')
        		{
        			strcpy(trasferiti[b].anno,scuola[b].anno);
        			strcpy(trasferiti[b].nome,scuola[b].nome);
        			strcpy(trasferiti[b].cognome,scuola[b].cognome);
        		}
        		b++;
        	}while (b<i);
        	
           for (j=n;j<i-1;j++)
          {
          	scuola[j]=scuola[j+1];
		  }
		  i--;
          n--;
		}
    }
    
    return i;
}

int main()
{int i,scelta,ris;
	do{
        int i=inserimento () ;
		do{          
			cout<<"cosa vuoi fare 1 ordinamento 2 assenze 3 alfabetico 4 stato 5 modifica 6 cancellazione 7 fine"<<endl;
			cin>>scelta;
			switch(scelta)
			{
				case 1: crescente(i); break;
				case 2: assenze(i); break;
				case 3: alfabetico (i);break;
				case 4: stato(i);break;
				case 5: modifica(i);break;
				case 6: i=cancellazione (i);break;
				case 7:cout<<"fine scelta"<<endl;break;
				default :cout<<"errore"<<endl;
				}
		}while(scelta!=7);
		cout<<"vuoi continuare 1 si 2 no"<<endl;
		cin>>ris;
	}while(ris==1);
	return 0;
}
