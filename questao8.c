/*Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique. (TODAS)
    p = mat + 1; UM PONTEIRO ESTÁ RECEBENDO UM PONTEIRO DESLOCADO
    p = mat++; NÃO É PERMITIDO O INCREMENTO DE ENDEREÇOS DE VETORES VIA OPERADORES UNÁRIOS
    p = ++mat; NÃO É PERMITIDO O INCREMENTO DE ENDEREÇOS DE VETORES VIA OPERADORES UNÁRIOS
    x = (*mat)++; UMA VARIAVEL INTEIRA ESTÁ RECEBENDO O CONTEUDO DO VETOR mat[0] SOMANDO 1, OU SEJA, É PERMITIDO O USO DO OPERADOR UNÁRIO
*/
//SEGUE A JUSTIFICATIVA
#include <stdio.h>
int main(void){
    int mat[4], * p, x;
    p = mat + 1;
    p = mat++;
    p = ++mat;
    x = (*mat)++;
}
