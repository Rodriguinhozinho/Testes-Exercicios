#include <stdio.h>
#include <stdlib.h>
int main(){
	float *X;
	int N;
	*FILE *fin;
	*FILE *fout;
	fin=fopen("dados.txt", "r");
	if (fin == NULL){
		printf("File not found");
		return 0;
	}
	fscanf(fin, "%d" , &N);
	X = (float *) * malloc(N * sizeof(float));
	for (k=0; k<N; k++){
		fscanf(fin, "%f" , &X[k]);
	}
	fclose(fin);
	fout = fopen("positivos.txt", "w");
	for(k=0;k<N; k++){
		if(X[k]>=0)
			fprintf(fout, "%f\n", X[k]);
	}
	fclose(fout);
}

