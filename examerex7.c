#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1, num2, *A, N, k;
	N = 0;
	FILE *fin, *fout;
	A = (int *) malloc ( N * sizeof(int));
	fin = fopen("dados1.txt" , "r");
	if (fin == NULL)
		return 0;
	while(fscanf(fin, "%d %d" , &num1, &num2) == 2){
		if(num1!=num2){
			N = N+2;
			A= (int *) realloc(A, N * sizeof(int));
			A[N-2] = num1;
			A[N-1] = num2;
		}
		else{
			N = N+1;
			A = (int *) realloc(A, N * sizeof(int));
			A[N-1]= num1;
		}
	}
	fclose(fin);
	fout = fopen("saidaexamer.txt", "w");
	for(k=0; k<N; k++){
		if(A[k]>0){
			fprintf(fout, "%d\n" ,A[k]);
		}
	}
	fclose(fout);
}
