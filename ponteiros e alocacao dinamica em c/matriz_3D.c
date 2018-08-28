#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Declarando as variáveis ponteiro->ponteiro->ponteiro
    int *** y;
    int *** x;
    //declarando variáveis de controle e dimensões dos arrays
    int nl = 4, nc = 4, np = 4, i, j, k;
    //alocando bloco de memoria para y e verificando se a alocação foi bem sucedida
    y = (int ***)malloc(nl*sizeof(int **));
    
    if(y == 0){
        printf("Falha na alocação de memoria de y");
        exit(0);
    }
    for(i=0;i<nl;i++){
        y[i] = (int **)malloc(nl*nc*sizeof(int *));
        if(y[i] == 0){
            printf("Falha na alocação de memoria de y[%d]", i);
            exit(0);
        }
    }
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            y[i][j] = (int *)malloc(nl*nc*np*sizeof(int));
            if(y[i][j] == 0){
                printf("Falha na alocação de memoria de y[%d][%d]", i, j);
                exit(0);
            }
        }
    }
    //alocando memoria para o array que vai receber a copia do array y
    x = (int ***)malloc(nl*sizeof(int **));
    if(x == 0){
        printf("Falha na alocação de memoria de y");
        exit(0);
    }
    for(i=0;i<nl;i++){
        x[i] = (int **)malloc(nl*nc*sizeof(int *));
        if(x[i] == 0){
            printf("Falha na alocação de memoria de y[%d]", i);
            exit(0);
        }
    }
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            x[i][j] = (int *)malloc(nl*nc*np*sizeof(int));
            if(x[i][j] == 0){
                printf("Falha na alocação de memoria de y[%d][%d]", i, j);
                exit(0);
            }
        }
    }
    //copiando o conteúdo do array y para o array x
    memcpy(y[0][0], x[0][0], nl*nc*np*sizeof(int));
    //exibindo na tela o conteúdo do array y
    printf("Array y \n");
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            for(k=0;k<np;k++){
                y[i][j][k] = i+j+k;
                printf("%2d ", y[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    //exibindo na tela o conteúdo do array x
    printf("Array x \n");
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            for(k=0;k<np;k++){
                x[i][j][k] = i+j+k;
                printf("%2d ", x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
	//liberando a memoria que havia sido alocada
    free(**y);
    free(**x);
    free(*x);
    free(*y);
    free(y);
    free(x);

    return 0;
}

