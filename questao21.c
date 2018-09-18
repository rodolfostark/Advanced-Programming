#include "gc.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int i;
  int ** x;
  clock_t tempo;
  tempo = clock();
  GC_INIT();
  for (i = 0; i < 10000000; i++)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 4*sizeof(int));
   }
  tempo = clock() - tempo;
  printf("tempo1 = %f\n", (float)tempo/CLOCKS_PER_SEC);
  tempo = clock();
  x = (int **)malloc(1000*sizeof(int *));
  x[0] = (int *)malloc(1000*10000*sizeof(int));
  tempo = clock()-tempo;
  printf("tempo2 = %f",(float)tempo/CLOCKS_PER_SEC);
}


