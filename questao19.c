#include <stdio.h>

void multiplicarMatrizes(int * a, int nla, int nca, int * b, int nlb, int * c){	
	int i, j, k;
	for(i=0;i<nla;i++){
		for(j=0;j<nla;j++){
			int escalar = 0;
			for(k=0;k<nla;k++){
			escalar = escalar + a[i][k]*b[k][j];
			}
			c[i][j] = escalar;
		}
	}
	
	
}
