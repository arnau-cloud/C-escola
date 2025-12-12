#include <stdio.h>
#include<string.h>

int main() {

    char estacio[20];

    printf("Introdueix una estació del any: ");

    scanf("%s", estacio);

    if (strcmp(strlwr(estacio), "estiu")){
        printf("Comença el 21 de juny i acaba el 23 de setembre");
    }

    else if (strcmp(strlwr(estacio), "hivern")){
        printf("Comença el 21 de desembre i acaba el 20 març");
    }

    else if (strcmp(strlwr(estacio), "tardor")){
        printf("Comença el 23 de setembre");
    }

    else if (strcmp(strlwr(estacio), "primavera")){
        printf("Comença el 20 de març i acaba el 21 de juny");
    }

    else {
        printf("estació incorrecte");
    }
}