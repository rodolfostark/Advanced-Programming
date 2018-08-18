#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ** x, *** y;
    int nl = 4, nc = 4, np = 4, i, j, k;

    x = (int **)malloc(nl*sizeof(int *));
    x[0] = (int *)malloc(nl*nc*sizeof(int));
    
    //x[i+1] = x[i] + nc;
    //x[i] = x[i-1] + nc;
    for(i=1; i < nl; ++i){
        x[i] = x[i-1] + nc;
    }
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            x[i][j] = i + j;
        }
    }
    printf("x = \n");
    for(i=0;i<nl;i++){
        printf("|");
        for(j=0;j<nc;j++){
            printf("%2d ", x[i][j]);
        }
        printf("| \n");
    }

    y = (int ***)malloc(nl*sizeof(int **));
    y[0] = (int **)malloc(nl*nc*sizeof(int *));
    y[0][0] = (int *)malloc(nl*nc*np*sizeof(int));
    
    if(y == 0 || y[0] == 0 || y[0][0] == 0){
        printf("Falha na alocação de memoria! \n");
        exit(0);
    }
    //memcpy(y[0], x[0], nl*nc*sizeof(int));

    /*for(i=0;i<nl*nc;++i){
        y[0][i] = x[0][i];
    }*/
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
			for(k=0;k<np;k++){
				//printf("%2d ", y[i][j][k]);
				y[i][j][k] = i+j+k;
			}
        }
    }
    //memcpy

    free(*x);
    free(x);
    free(*y);
    free(y);

    return 0;
}
