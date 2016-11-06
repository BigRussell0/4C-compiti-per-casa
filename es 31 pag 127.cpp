// esercizio 31 pag 127
#include <iostream>
#include <string.h>
using namespace std;
string valore;
void stampa (string valore)
{    
  cout<< valore << endl <<endl ;    
  cout<< valore << endl <<endl ;    
  cout<< valore << endl <<endl ;
}
int main ()
{    
  cout<<" dammi la stringa di nomi:   ";    
  cin>> valore;    
  cout<<endl;    
  stampa (valore) ;
  return 0;}


esercizio 34 p 127
  #include <iostream>
  using namespace std;
int a;
int successione ( int a)
{
  int b;    
  b= a+1;    
  int c;    
  c= a+2;    
  int d;    
  d= a+3;    
  int e;    
  e= a+4;    
  int f;    
  f= a+5;    
  cout<<b;    
  cout<<c;    
  cout<<d;    
  cout<<e;    
  cout<<f;
}
int main ()
{    
  cout<<" inserisci a: ";    
   cin>>a;
   cout<<" il valore di b: ";    
   cout<<" il valore di c: ";    
   cout<<" il valore di d: ";   
   cout<<" il valore di e: ";    
   cout<<" il valore di f: ";
    successione (a) ;
  
  
  
  
  
  ES 38 p 128
 
#include <iostream>
    using namespace std;
  float prezzo, perc_sconto, prezzo_scontato;
  int sconto ( float prezzo,float perc_sconto, float prezzo_scontato)
  {
    prezzo_scontato= prezzo- ((prezzo*perc_perc_sconto)/100);
    return prezzo_scontato; 
  }
  int main ()
  {    
    cout<<" inserire il Prezzo del Prodotto:  ";   
    cin>>prezzo;   
    cout<<" inserire lo sconto:  ";   
    cin>>perc_sconto; 
    cout<<endl;    
    cout<<"il prezzo scontato è: "   
    cout<<sconto (prezzo.perc_sconto.prezzo.scontato) <<endl ; 
    return 0;}

  
  
  
  esercizio 49 p 128
    #include <iostream>
    using namespace std;
  
  enum mesi
  {
    ROSSO, GIALLO, VERDE
  };
  int main ()
  {
    return 0;
  }
  
  
  
  
  
  
  esercizio 48
    
     
    #include <iostream>    
    using namespace std;
    enum mesi
    {
      gennaio=1, febbraio, marzo, aprile, maggio, giugno,
      luglio, agosto, settembre, ottombre, novombre, dicembre
    };
  
  int main ()
  {
    cout<<" i numeri  dei mesi di vacanza sono:  ";
    cout<<giugno <<"   " <<luglio <<"     " <<agosto << endl ;
    return 0;
  }
