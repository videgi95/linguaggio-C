#include <stdio.h>
/*
  Variabili:
  int -> 4 byte ovvero 32 bit, ovvero 4.294.967.296 valori, metà negativi e metà positivi.
  short int= numero 2 byte ->16 bit
  float = numero in virgola mobile, 2 byte per numero e 2 byte per la parte decimale.
  long int raddopia float e int.
  double è abbreviazione per long float.
  char = carattere composto da 1 byte -> 8 bit -> 256 valori, se ne utilizzano 128 in realtà
  

*/
int main(){

    int primo_numero;
    int secondo_numero;
    int somma;

    printf("Inserisci il primo numero\n");
    scanf("%d",&primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d",&secondo_numero);

    somma = primo_numero + secondo_numero;

    printf("La somma dei numeri e': %d\n",somma);
}
