#include <stdio.h>
#include <stdlib.h>
/*  Fun��o : Exibir inteiros de 100 a 1
    Autor : Edkallenn
    Data : 06/04/2012
    Observa��es: Segunda vers�o usando if
*/

main(){
    int cont;
    cont = 1; 	//vari�vel contadora
    while(cont<=100){
        if(cont%2==0){	// teste - condicional
			printf("%d\t", cont);
		}
        cont++;
    }
    printf("\n");
    system("pause");
}
