#include <stdio.h>
#include <stdlib.h>
/*  Fun��o : Exibir inteiros de 100 a 1
    Autor : Edkallenn
    Data : 06/04/2012
    Observa��es:
*/

main(){
    int cont;
    cont = 1;
    while(cont<=50){
        if(cont%2==0){
            printf("%d\n", cont);
        }
        cont++;
    }
    getch();
}
