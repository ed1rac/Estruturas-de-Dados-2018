#include <stdio.h>
#include <stdlib.h>
/*  Fun��o : Exibir inteiros de 100 a 1
    Autor : Edkallenn
    Data : 06/04/2012
    Observa��es:
*/

main(){
    int cont;
    cont = 100;
    while(cont>=1){
        printf("%d\t", cont);
        cont--;
    }
    getch();
}
