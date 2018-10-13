#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void bolha(float * vet, int n) {
	int i, j;
	float temp;
	for (i = 0; i < n - 1; i++){
        for (j = (i+1); j < n; j++){
            if (vet[j] < vet[i]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main(void){	
	srand(time(NULL));
	int n = 400000, i;
    float * x, * y;
    clock_t tempo;
    x = (float *) malloc(n*sizeof(float));
    y = (float *) malloc(n*sizeof(float));
    for(i=0;i<n;i++){
		x[i] = rand()%100000 + 1;
	}
	tempo = clock();
	bolha(x, n);
	tempo = clock() - tempo;
	printf ("A ordenação do array usando a função bolha levou %f segundos.\n", ((float)tempo)/CLOCKS_PER_SEC);
	for(i=0;i<n;i++){
		y[i] = rand()%100000 + 1;
	}
	tempo = clock();
	qsort(x, n, sizeof(float), compare);
	tempo = clock() - tempo;
	printf ("A ordenação do array usando a função qsort levou %f segundos.\n", ((float)tempo)/CLOCKS_PER_SEC);
	
}
