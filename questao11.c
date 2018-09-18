#include <stdio.h>
//NO PROGRAMA IDEIALIZADO OS ENDEREÇOS DOS INTEIROS TERIAM APENAS 2 BYTES, O QUE SEGUNDO A EXECUÇÃO DESTE PROGRAMA SE MOSTROU FALSO, SEGUNDO ELE OS TIPOS INT E FLOAT SO ALOCADOS, AMBOS, EM 4 BYTES
int main(){
  char x[4];
  int i;
  for(i=0;i<4;i++){
    printf("%d ", x+i);
  }
  printf("\n");
  int y[4];
  for(i=0;i<4;i++){
    printf("%d ", y+i);
  }
  printf("\n");
  float z[4];
  for(i=0;i<4;i++){
    printf("%d ", z+i);
  }
  printf("\n");
  double w[4];
  for(i=0;i<4;i++){
    printf("%d ", w+i);
  }
}
