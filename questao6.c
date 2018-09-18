#include <stdio.h>

int main(void){
	  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
	  float *f;
	  int i;
	  f = vet;
	  printf("contador/valor/valor/endereco/endereco");
	  for(i = 0 ; i <= 4 ; i++){
	    printf("\ni = %d",i);
	    printf("vet[%d] = %f",i, vet[i]);
	    printf("*(f + %d) = %f",i, *(f+i));
	    printf("&vet[%d] = %p",i, &vet[i]);
	    printf("(f + %d) = %p",i, f+i);
	  }
	}

/*
i = 0 vet[0] = 1.100000 *(f + 0) = 1.100000 &vet[0] = 0x7fff7456a0f0 (f + 0) = 0x7fff7456a0f0
i = 1 vet[1] = 2.200000 *(f + 1) = 2.200000 &vet[1] = 0x7fff7456a0f4 (f + 1) = 0x7fff7456a0f4
i = 2 vet[2] = 3.300000 *(f + 2) = 3.300000 &vet[2] = 0x7fff7456a0f8 (f + 2) = 0x7fff7456a0f8
i = 3 vet[3] = 4.400000 *(f + 3) = 4.400000 &vet[3] = 0x7fff7456a0fc (f + 3) = 0x7fff7456a0fc
i = 4 vet[4] = 5.500000 *(f + 4) = 5.500000 &vet[4] = 0x7fff7456a100 (f + 4) = 0x7fff7456a100
*/
