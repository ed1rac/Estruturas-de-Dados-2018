#include <stdio.h>
#include <stdlib.h>
/*  Fun��o : Exibir inteiros de 100 a 1
    Autor : Edkallenn
    Data : 06/04/2012
    Observa��es:
*/

main(){
    int cont, num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    cont = 1;
    while(cont<=num){
        if(cont%2==0){
            printf(" %d\t", cont);
        }
        cont++;
    }
    getch();
}
