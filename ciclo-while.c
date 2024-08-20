#include <stdio.h>


int main(){

    int n=5;
    int f=5;
    int fattoriale=1;

    while(n>0){
        fattoriale=fattoriale*n;
        n--;
    }

    printf("Fattoriale di %d = %d", f,fattoriale);

}

