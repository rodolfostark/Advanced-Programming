#include <stdio.h>

// Ponteiros usados como parâmetros de funções propocionam a manipulação direta da variável, além de não alocar memoria para copiar a variavel

int mudaValor(int * x){
    *x = 3;
}

int main(void){
    int x = 1;
    printf("x = %d \n", x);
    mudaValor(&x);
    printf("x = %d", x);

}
