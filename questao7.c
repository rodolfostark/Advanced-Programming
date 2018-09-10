/*Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?
    *(pulo + 2); Apenas essa expressão referencia o terceiro elemento!
    *(pulo + 4);
    pulo + 4;
    pulo + 2;
*/
#include <stdio.h>

int main(void){
    int pulo[] = {1,2,3};
    printf("*(pulo + 2) = %d", *(pulo + 2));
}
