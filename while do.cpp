#include <iostream>

using namespace std; // So we can see cout and endl
int x;
int main()
{ 
cout<<"Inserisci il valore iniziale di x ";
// Don't forget to declare variables
cin>>x;  
cout<<"Ecco la sequenza: ";
  while ( x < 10 )
  { // While x is less than 10 
    cout<< x <<endl;
    x++;             // Update x so the condition can be met eventually
  }
  //cin.get();
  system("PAUSE");
  return 0;
}
