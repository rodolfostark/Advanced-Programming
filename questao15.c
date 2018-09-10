#include <stdio.h> //inclui o arquivo de header da biblioteca de entrada e saída da linguagem c
#include <stdlib.h> //inclui o arquivo de header da biblioteca de próposito genérico padrão do c
#include <time.h> //inclui o arquivo de header da biblioteca de manipulação de datas e horários

// implementação da função compare necessária para a função qsort
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
	srand(time(NULL));
	int n = 4, i;
    float * x;
    x = (float *) malloc(n*sizeof(float));
    for(i=0;i<n;i++){
		x[i] = rand()%10 + 1;
		printf("x [%d] = %f \n", i, x[i]);
	}
	qsort(x, n, sizeof(float), compare);
	printf("\n");
	for(i=0;i<n;i++){
		printf("x [%d] = %f \n", i, x[i]);
	}
	free(x);

}
