#include <stdio.h>
#include <stdlib.h>
/*  Fun��o : Tabela ASCII
    Autor : Edkallenn  - Data : 07/05/2013
    Obs:
 */

main(){

    int i;
    printf("Tabela de Codigo ASCII\n\n");
    for(i=0;i<=128;i++){
        if (i%5==0) printf("\n");
        printf("(%-3d): %c \t", i, i);
    }

    char c = 'a';
    //diferen�as entre %d e %c
    printf("\n %d %c \n\n", c,c);
    getchar();

}
