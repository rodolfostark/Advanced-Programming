#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void * myRealloc(void * old, int newSize, int oldSize)
{
    void * novo;
    if(newSize > oldSize)
    {
        novo = malloc(newSize);
        memcpy(novo, old, oldSize);
    }
    else if(oldSize < newSize)
    {
        novo = malloc(newSize);
        memcpy(novo, old, newSize);
    }
    else
    {
        novo = old;
    }
    return novo;
}
int main(void){
    int * x;
    x = (int *)malloc(4*sizeof(int));
    printf("tamanho x = %d \n", sizeof(x));
    x = myRealloc(x, 4*sizeof(int), 4*sizeof(int));
    printf("tamanho x = %d \n", sizeof(x));

}


