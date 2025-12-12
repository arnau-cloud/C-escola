#include <stdio.h>

int main() {
    int edat;
    
    printf("Introdueix un numero: "); 
  
    scanf("%d", &edat);


    if (edat < 0) {
        printf("Es impossible");
    }
    
    else if (edat < 20) {
        printf("Ets molt jove");
    }

    else {
        printf("No ets jove");
    }
    
}