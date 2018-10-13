#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicarMatrizes(int ** a, int nla, int nca, int ** b, int ncb, int ** c){
    int i, j, k;

    c = (int **)malloc(nla*sizeof(int *));
    c[0] = (int *)malloc(nla*ncb*sizeof(int));

     for(i=1;i<nla;i++){
        c[i] = c[i-1]+ncb;
    }

	for(i=0;i<nla;i++){
		for(j=0;j<ncb;j++){
			int escalar = 0;
			for(k=0;k<nca;k++){
			escalar = escalar + a[i][k]*b[k][j];
			}
			c[i][j] = escalar;
		}
	}
	imprimirMatriz(c, nla, ncb);
}
void imprimirMatriz(int ** a, int nl, int nc){
    int i, j;
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void preencherMatriz(int ** a, int nl, int nc){
    int i, j;
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            a[i][j] = rand()%10 + 1;
        }
    }
}
int main(void){
    srand(time(NULL));
    int ** a, ** b, ** c;
    int i, nl = 2, nc = 2;
    a = (int **)malloc(nl*sizeof(int *));
    a[0] = (int *)malloc(nl*nc*sizeof(int));

    for(i=1;i<nl;i++){
        a[i] = a[i-1]+nc;
    }

    b = (int **)malloc(nc*sizeof(int *));
    b[0] = (int *)malloc(nl*nc*sizeof(int));

     for(i=1;i<nc;i++){
        b[i] = b[i-1]+nl;
    }

    preencherMatriz(a, nl, nc);
    preencherMatriz(b, nc, nl);

    imprimirMatriz(a, nl, nc);
    imprimirMatriz(b, nc, nl);

    multiplicarMatrizes(a, nl, nc, b, nc, c);
}
