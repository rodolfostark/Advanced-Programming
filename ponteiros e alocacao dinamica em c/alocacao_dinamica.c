#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n, * x, * y, i;
    printf("Informe uma quantidade de numeros: ");
    scanf("%d: \n", &n);
    
    x = (int *)malloc(n*sizeof(int));
    y = (int *)malloc(n*sizeof(int));
    
    if(x == 0 || y == 0){
        printf("Falha na alocação de memoria! \n");
        exit(0);
    }
    printf("x = { ");
    for(i=0; i<n; ++i){
        x[i] = rand()%21 + 10;
        printf("%d ", x[i]);
    }
    printf("} \n");
    printf("y -> cpy(x) = { ");
    for(i=0; i<n; ++i){
        y[i] = x[i];
         printf("%d ", y[i]);
    }
    
    printf("} \n");
    free(y);
    free(x);
    return 0;
}
