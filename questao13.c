#include <stdio.h>

// Ponteiros usados como par�metros de fun��es propocionam a manipula��o direta da vari�vel, al�m de n�o alocar memoria para copiar a variavel

int mudaValor(int * x){
    *x = 3;
}

int main(void){
    int x = 1;
    printf("x = %d \n", x);
    mudaValor(&x);
    printf("x = %d", x);

}
