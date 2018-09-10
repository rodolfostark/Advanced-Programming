#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	int n = 4, i;
    float * x;
    x = (float *) malloc(n*sizeof(float));
    for(i=0;i<n;i++){
		x[i] = rand()%10 + 1;
		printf("x [%d] = %f \n", i, x[i]);
	}
	bolha(x, n);
	printf("\n");
	for(i=0;i<n;i++){
		printf("x [%d] = %f \n", i, x[i]);
	}


}
