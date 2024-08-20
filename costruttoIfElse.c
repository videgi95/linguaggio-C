#include <stdio.h>

int main(){
    int numeratore;
    int denominatore;
    float divisione;

    printf("\nInserisci il primo numero: ");
    scanf("%d",&numeratore);

    printf("inserisci il secondo numero: ");
    scanf("%d",&denominatore);

    if(denominatore != 0){
        divisione = (float)numeratore/denominatore;
        printf("\nIl risultato e' : %f\n",divisione);
    }else{
        printf("Il denominatore non puo' essere 0");
    }

    return 0;
}