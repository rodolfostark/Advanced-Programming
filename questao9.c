/*
O que fazem os seguintes programas em C?
*/
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}
//LISTA OS ELEMENTOS DO VETOR VET, NO QUE VET É O ENDEREÇO DO PRIMEIRO ELEMENTO DO VETOR. NOTE QUE FOI USADO O OPERADOR DE DEREFERÊNCIA PARA EXIBIR O CONTEÚDO DE VET.
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
//LISTA OS ENDEREÇOS, EM HEXADECIMAL, DO ELEMETOS DO VETOR VET; TAMBÉM COM BASE NO CONHECIMENTO DE QUE VET GUARDA O ENDEREÇO DO PRIMEIRO ELEMENTO DO VETOR
