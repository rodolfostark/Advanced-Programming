#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void somarVetores(int * v1, int * v2, int * v3, int n){
	int i;
	for(i=0;i<n;i++){
		v3[i] = v1[i]+v2[i];
	}

}
int main(void){
	srand(time(NULL));
	int * v1, * v2, * v3, n = 5, i;
    v1 = (int *)malloc(n*sizeof(int));
    v2 = (int *)malloc(n*sizeof(int));
    v3 = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
		v1[i] = rand()%10 + 1;
	}
	for(i=0;i<n;i++){
		v2[i] = rand()%10 + 1;
	} 
	somarVetores(v1, v2, v3, n);
	printf("v1 = <");
	for(i=0;i<n;i++){
		printf("%d, ", v1[i]);
	}
	printf("> \n");
	printf("v2 = <");
	for(i=0;i<n;i++){
		printf("%d, ", v2[i]);
	}
	printf("> \n");
	printf("v3 = <");
	for(i=0;i<n;i++){
		printf("%d, ", v3[i]);
	}
	printf("> \n");
}
